
    /**
     * @file NRE_Main.cpp
     * @brief Test of NRE-Physic
     * @author Louis ABEL
     * @date 03/02/2020
     * @copyright CC-BY-NC-SA
     */

    #include <iostream>

    #include "Header/NRE_Physic.hpp"
    
    using namespace NRE::Physic;
    
    int main() {
        Particle2D o({0.5});
        Particle2D g(o);
        Circle c({0, 0}, 1);
        
        std::cout << o.collide(g) << std::endl;
        std::cout << c.collide(g) << std::endl;
        
        return 0;
    }
