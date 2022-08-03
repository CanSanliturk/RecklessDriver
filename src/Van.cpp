#include <iostream>
#include "../include/Van.h"
#include "../include/Player.h"

namespace RecklessDriver {

    Van::Van(int _damage, int _cash) 
        : TrafficCar(_damage, _cash)
    {
        SetName("Van");
    }

    Van::~Van()
    {
    }

    void Van::OnCollision(const GameObject& other)
    {
        if (other.GetName() == "Player")
        {
            auto p = (Player&)other;
            std::cout << "#### COLLISION -> [Van] Milk bottles falling" << std::endl;
            p.ApplyDamage(GetDamage(), GetCash());
        }
    }
}