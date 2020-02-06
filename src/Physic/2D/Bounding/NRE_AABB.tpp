    
    /**
     * @file NRE_AABB.tpp
     * @brief Implementation of 2D Physic's API's Object : AABB
     * @author Louis ABEL
     * @date 05/02/2020
     * @copyright CC-BY-NC-SA
     */
    
    namespace NRE {
        namespace Physic2D {

            inline AABB::AABB(Math::Point2D<float> const& mn, Math::Point2D<float> const& mx) : min(mn), max(mx) {
            }
            
            inline Math::Point2D<float> const& AABB::getMin() const {
                return min;
            }

            inline Math::Point2D<float> const& AABB::getMax() const {
                return max;
            }

            inline Math::Point2D<float> const& AABB::getBL() const {
                return min;
            }
    
            inline Math::Point2D<float> const& AABB::getTR() const {
                return max;
            }

            inline Math::Point2D<float> AABB::getTL() const {
                auto res = min;
                res.setY(max.getY());
                return res;
            }
    
            inline Math::Point2D<float> AABB::getBR() const {
                auto res = min;
                res.setX(max.getX());
                return res;
            }
            
            inline bool AABB::collide(AABB const& box) const {
                return box.getMin().getX() < getMax().getX()
                    && box.getMax().getX() > getMin().getX()
                    && box.getMin().getY() < getMax().getY()
                    && box.getMax().getY() > getMin().getY();
            }
        }
    }
