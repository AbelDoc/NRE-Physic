
    /**
     * @file NRE_Main.cpp
     * @brief Test of NRE-Physic
     * @author Louis ABEL
     * @date 03/02/2020
     * @copyright CC-BY-NC-SA
     */

    #include "Header/NRE_Physic.hpp"
    
    using namespace NRE::Math;
    using namespace NRE::Physic;
    using namespace NRE::Utility;
    
    int main() {
        Circle c({0, 0}, 1);
        Particle2D p1({5, 5});
        Particle2D p2({0.5, 0.5});
        
        std::cout << p1.collide(c) << std::endl;
        std::cout << p2.collide(c) << std::endl;
        std::cout << c.collide(p1) << std::endl;
        std::cout << c.collide(p2) << std::endl;
        
        return 0;
    }
