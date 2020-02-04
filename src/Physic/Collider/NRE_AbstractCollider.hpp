    
    /**
     * @file NRE_AbstractCollider.hpp
     * @brief Declaration of Physic's API's Object : AbstractCollider
     * @author Louis ABEL
     * @date 03/02/2020
     * @copyright CC-BY-NC-SA
     */
    
    #pragma once
    
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
             * @class AbstractCollider
             * @brief Describe an abstract collider object
             */
            class AbstractCollider {
                public :    // Methods
                    /**
                     * Test if this collide with the given object
                     * @param o the other object
                     * @return  the test's result
                     */
                    virtual bool collide(AbstractCollider const& o) const = 0;
            };
        }
    }