    
    /**
     * @file NRE_Particle.hpp
     * @brief Declaration of Physic's API's Object : Particle
     * @author Louis ABEL
     * @date 03/02/2020
     * @copyright CC-BY-NC-SA
     */

    #pragma once
    
    #include <Header/NRE_Math.hpp>

    #include "../../Utility/Interface/Collideable/NRE_Collideable.hpp"

    /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace Physic
         * @brief Physic's API
         */
        namespace Physic {
        
            /**
             * @class Particle
             * @brief Describe a collideable particle
             */
            class Particle2D : public Utility::Collideable<Particle2D> {
                private :    // Fields
                    Math::Point2D<float> pos;   /**< The particle position */
                    
                public :   // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        Particle2D() = default;
                        /**
                         * Construct the particle from it's position
                         * @param p the particle's position
                         */
                        Particle2D(Math::Point2D<float> const& p) : pos(p) {
                        }
    
                    //## Copy-constructor ##//
                        /**
                         * Copy p into this
                         * @param p the particle to copy
                         */
                        Particle2D(Particle2D const& p) = default;
    
                    //## Move-constructor ##//
                        /**
                         * Move p into this
                         * @param p the particle to move
                         */
                        Particle2D(Particle2D && p) = default;
    
                    //## Deconstructor ##//
                        /**
                         * Particle2D Deconstructor
                         */
                        ~Particle2D() = default;
    
                    //## Getter ##//
                        /**
                         * @return the particle's position
                         */
                        Math::Point2D<float> getPosition() const {
                            return pos;
                        }
                        
                    //## Methods ##//
                        /**
                         * Test if this collide with the given object
                         * @param o the other object
                         * @return  the test's result
                         */
                        template <class K>
                        bool collide(K const& o) const;
    
                    //## Assignment Operator ##//
                        /**
                         * Copy assignment of p into this
                         * @param p the particle to copy
                         * @return  the reference of himself
                         */
                        Particle2D& operator =(Particle2D const& p) = default;
                        /**
                         * Move assignment of p into this
                         * @param p the particle to move
                         * @return  the reference of himself
                         */
                        Particle2D& operator =(Particle2D && p) = default;
            };
            
        }
    }