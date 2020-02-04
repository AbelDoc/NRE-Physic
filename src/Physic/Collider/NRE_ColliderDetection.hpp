    
    /**
     * @file NRE_ColliderDetection.hpp
     * @brief Declaration of Physic's API's Object : Collideable
     * @author Louis ABEL
     * @date 03/02/2020
     * @copyright CC-BY-NC-SA
     */
    
    #pragma once
    
    #include "Core/NRE_Particle2D.hpp"
    #include "Core/NRE_Circle.hpp"
    
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
            bool Particle2D::collide(Particle2D const& o) const {
                return pos == o.getPosition();
            }
            
            template <>
            bool Particle2D::collide(Circle const& o) const {
                return pos.distanceSquared(o.getCenter()) <= (o.getRadius() * o.getRadius());
            }
    
            template <>
            bool Circle::collide(Particle2D const& o) const {
                return o.collide(*this);
            }
    
            template <>
            bool Circle::collide(Circle const& o) const {
                return center.distanceSquared(o.getCenter()) <= (radius + o.getRadius()) * (radius + o.getRadius());
            }
            
        }
    }