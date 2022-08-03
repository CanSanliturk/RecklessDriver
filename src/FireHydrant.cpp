#include <iostream>
#include "../include/FireHydrant.h"
#include "../include/Player.h"

namespace RecklessDriver {

    FireHydrant::FireHydrant(int damage, int cash)
        : SideObject(damage, cash)
    {
        SetName("FireHydrant");
    }
    
    FireHydrant::~FireHydrant()
    {

    }
    
    void FireHydrant::OnCollision(const GameObject& other)
    {
        if (other.GetName() == "Player")
        {
            auto p = (Player&)other;
            if (!count) {
                std::cout << "#### COLLISION -> [FireHydrant] Fountain" << std::endl;
                p.ApplyDamage(GetDamage(), GetCash());
            }
            else {
                std::cout << "#### COLLISION -> [FireHydrant] Collided Again" << std::endl;
                p.ApplyDamage(GetDamage(), GetCash() * count);
            }
        }
    }

}