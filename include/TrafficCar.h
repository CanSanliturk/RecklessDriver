#pragma once
#include "GameObject.h"
namespace RecklessDriver {

    class TrafficCar : public GameObject {

        int damage;
        int cash;

    public:
        TrafficCar(int _damage, int _cash);
        ~TrafficCar();
        int GetDamage() const { return damage; }
        int GetCash() const { return cash; }
    };

}