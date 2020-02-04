    
    /**
     * @file Collider/NRE_Collider.hpp
     * @brief Declaration of Physic's API's Object : Collider
     * @author Louis ABEL
     * @date 03/02/2020
     * @copyright CC-BY-NC-SA
     */
    
    #pragma once
    
    #include <Header/NRE_Utility.hpp>
    
    #include "NRE_AbstractCollider.hpp"
    
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
             * @class Collider
             * @brief Describe a collider object
             */
            template <class T>
            class Collider : public AbstractCollider, Utility::StaticInterface<T, Collider> {
                public :    // Methods
                    /**
                     * Test if this collide with the given object
                     * @param o the other object
                     * @return  the test's result
                     */
                    bool collide(AbstractCollider const& o) const override {
                        return o.collide(*this);
                    }
                    /**
                     * Test if this collide with the given object
                     * @param o the other object
                     * @return  the test's result
                     */
                    template <class K, typename std::enable_if_t<!std::is_same<K, AbstractCollider>::value, int> = 0>
                    bool collide(K const& o) const {
                        return this->impl().collide(o);
                    }
            };
        }
    }