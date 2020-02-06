    
    /**
     * @file NRE_Shape.hpp
     * @brief Declaration of 2D Physic's API's Object : Shape
     * @author Louis ABEL
     * @date 06/02/2020
     * @copyright CC-BY-NC-SA
     */
    
    #pragma once
    
    #include "../Bounding/NRE_AABB.hpp"
    
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
             * @class Shape
             * @brief Represent a body shape
             */
            class Shape {
                public :    // Methods
                    //## Deconstructor ##//
                        /**
                         * Shape Deconstructor
                         */
                        virtual ~Shape() = default;
                        
                    //## Getter ##//
                        /**
                         * @return the shape's AABB
                         */
                        virtual AABB getAABB() const = 0;
            };
        }
    }