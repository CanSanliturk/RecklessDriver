#include <iostream>
#include "../include/Sedan.h"
#include "../include/Player.h"

namespace RecklessDriver {

    Sedan::Sedan(int _damage, int _cash) : TrafficCar(_damage, _cash)
    {
        SetName("Sedan");
    }

    Sedan::~Sedan()
    {
    }

    void Sedan::OnCollision(const GameObject& other)
    {
        if (other.GetName() == "Player")
        {
            auto p = (Player&)other;
            std::cout << "#### COLLISION -> [Sedan] Sparks flying" << std::endl;
            p.ApplyDamage(GetDamage(), GetCash());
        }
    }
}