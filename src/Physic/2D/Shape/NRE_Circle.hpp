    
    /**
     * @file NRE_Circle.hpp
     * @brief Declaration of 2D Physic's API's Object : Circle
     * @author Louis ABEL
     * @date 06/02/2020
     * @copyright CC-BY-NC-SA
     */
    
    #pragma once
    
    #include "NRE_Shape.hpp"
    
    /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace Physic2D
         * @brief 2D Physic's API
         */
        namespace Physic2D {
        
            /**
             * @class Circle
             * @brief Represent a circular shape
             */
            class Circle : public Shape {
                private :   // Fields
                    Math::Point2D<float> center;    /**< The circle's center */
                    float radius;                   /**< The circle's radius */
                    
                public :    // Methods
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

                    //## Copy constructor ##//
                        /**
                         * Copy c into this
                         * @param c the circle to copy
                         */
                        Circle(Circle const& c) = default;

                    //## Move constructor ##//
                        /**
                         * Move c into this
                         * @param c the circle to move
                         */
                        Circle(Circle && c) = default;

                    //## Deconstructor ##//
                        /**
                         * Circle Deconstructor
                         */
                        ~Circle() = default;

                    //## Getter ##//
                        /**
                         * @return the shape's AABB
                         */
                        AABB getAABB() const override {
                            return AABB(center - Math::Point2D<float>(radius), center + Math::Point2D<float>(radius));
                        }

                    //## Assignment Operator ##//
                        /**
                         * Copy c into this
                         * @param c the object to copy into this
                         * @return  the reference of himself
                         */
                        Circle& operator =(Circle const& c) = default;
                        /**
                         * Move c into this
                         * @param c the object to move into this
                         * @return  the reference of himself
                         */
                        Circle& operator =(Circle && c) = default;
            };
        
        }
    }