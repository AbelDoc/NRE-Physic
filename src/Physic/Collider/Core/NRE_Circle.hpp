    
    /**
     * @file NRE_Circle.hpp
     * @brief Declaration of Physic's API's Object : Circle
     * @author Louis ABEL
     * @date 04/02/2020
     * @copyright CC-BY-NC-SA
     */
    
    #pragma once
    
    #include <Header/NRE_Math.hpp>
    
    #include "../NRE_Collider.hpp"
    
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
             * @brief Describe a collideable circle
             */
            class Circle : public Collider<Circle> {
                private :    // Fields
                    Math::Point2D<float> center;   /**< The circle's center */
                    float radius;                  /**< The circle's radius */
                
                public :   // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        Circle() = default;
                        /**
                         * Construct the circle from it's center and radius
                         * @param c the circle's center
                         * @param r the circle's radius
                         */
                        Circle(Math::Point2D<float> const& c, float r) : center(c), radius(r) {
                        }
                        
                    //## Copy-constructor ##//
                        /**
                         * Copy c into this
                         * @param c the circle to copy
                         */
                        Circle(Circle const& c) = default;
                    
                    //## Move-constructor ##//
                        /**
                         * Move c into this
                         * @param p the circle to move
                         */
                        Circle(Circle && c) = default;
                    
                    //## Deconstructor ##//
                        /**
                         * Circle Deconstructor
                         */
                        ~Circle() = default;
    
                    //## Getter ##//
                        /**
                         * @return the circle's center
                         */
                        Math::Point2D<float> getCenter() const {
                            return center;
                        }
                        /**
                         * @return the circle's radius
                         */
                        float getRadius() const {
                            return radius;
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
                         * Copy assignment of c into this
                         * @param c the circle to copy
                         * @return  the reference of himself
                         */
                        Circle& operator =(Circle const& c) = default;
                        /**
                         * Move assignment of c into this
                         * @param c the circle to move
                         * @return  the reference of himself
                         */
                        Circle& operator =(Circle && c) = default;
            };
            
        }
    }