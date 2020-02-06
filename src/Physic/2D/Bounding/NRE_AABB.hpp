    
    /**
     * @file NRE_AABB.hpp
     * @brief Declaration of 2D Physic's API's Object : AABB
     * @author Louis ABEL
     * @date 05/02/2020
     * @copyright CC-BY-NC-SA
     */
    
    #pragma once
    
    #include <Header/NRE_Math.hpp>
    
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
             * @class AABB
             * @brief Represent an axis aligned bounding box
             */
            class AABB {
                private :   // Fields
                    Math::Point2D<float> min;   /**< The bounding min point */
                    Math::Point2D<float> max;   /**< The bounding max point */
                    
                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        AABB() = default;
                        /**
                         * Construct the AABB from it's min and max points
                         * @param mn the min points
                         * @param mx the max points
                         */
                        AABB(Math::Point2D<float> const& mn, Math::Point2D<float> const& mx);

                    //## Copy constructror ##//
                        /**
                         * Copy box into this
                         * @param box the AABB to copy
                         */
                        AABB(AABB const& box) = default;

                    //## Move constructror ##//
                        /**
                         * Move box into this
                         * @param box the AABB to move
                         */
                        AABB(AABB && box) = default;

                    //## Deconstructor ##//
                        /**
                         * AABB Deconstructor
                         */
                        ~AABB() = default;

                    //## Getter //##
                        /**
                         * @return the AABB min point
                         */
                        Math::Point2D<float> const& getMin() const;
                        /**
                         * @return the AABB max point
                         */
                        Math::Point2D<float> const& getMax() const;
                        /**
                         * @return the bottom left point
                         */
                        Math::Point2D<float> const& getBL() const;
                        /**
                         * @return the top right point
                         */
                        Math::Point2D<float> const& getTR() const;
                        /**
                         * @return the top left point
                         */
                        Math::Point2D<float> getTL() const;
                        /**
                         * @return the bottom right point
                         */
                        Math::Point2D<float> getBR() const;

                    //## Methods ##//
                        /**
                         * Test if this collide with the given AABB
                         * @param box the other object
                         * @return    the test's result
                         */
                        bool collide(AABB const& box) const;

                    //## Assignment Operator ##//
                        /**
                         * Copy box into this
                         * @param box the object to copy into this
                         * @return    the reference of himself
                         */
                        AABB& operator =(AABB const& box) = default;
                        /**
                         * Move box into this
                         * @param box the object to move into this
                         * @return    the reference of himself
                         */
                        AABB& operator =(AABB && box) = default;
                    
            };
        }
    }

    #include "NRE_AABB.tpp"