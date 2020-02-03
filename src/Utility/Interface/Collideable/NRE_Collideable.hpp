    
    /**
     * @file Interface/Collideable/NRE_Collideable.hpp
     * @brief Declaration of Physic's API's Utility's Interface : Collideable
     * @author Louis ABEL
     * @date 03/02/2020
     * @copyright CC-BY-NC-SA
     */
    
    #pragma once
    
    #include <Utility/Interfaces/NRE_StaticInterface.hpp>
    
    /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace Utility
         * @brief Utility's API
         */
        namespace Utility {
            
            /**
             * @class Collideable
             * @brief Describe a collideable object with others
             */
            template <class T>
            class Collideable : public StaticInterface<T, Collideable> {
                public :    // Methods
                    //## Methods ##//
                        /**
                         * Test if this collide with the given object
                         * @param o the other object
                         * @return  the test's result
                         */
                        template <class K>
                        bool collide(K const& o) const {
                            return this->impl().collide(o);
                        }
            };
        }
    }
