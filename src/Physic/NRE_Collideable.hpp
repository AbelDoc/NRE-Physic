    
    /**
     * @file Physics/NRE_Collideable.hpp
     * @brief Declaration of Physic's API's Object : Collideable
     * @author Louis ABEL
     * @date 03/02/2020
     * @copyright CC-BY-NC-SA
     */
    
    #pragma once

    #include "Collideable/NRE_Circle.hpp"
    #include "Collideable/NRE_Particle2D.hpp"
    
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
    
            template <>
            bool Particle2D::collide(Circle const& o) const {
                return pos.distanceSquared(o.getCenter()) <= (o.getRadius() * o.getRadius());
            }
            
            template <>
            bool Circle::collide(Particle2D const& o) const {
                return o.collide(*this);
            }
            
        }
    }