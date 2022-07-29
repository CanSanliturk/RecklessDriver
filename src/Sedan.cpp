#include "../include/Sedan.h"

namespace RecklessDriver {

    Sedan::Sedan(int _damage, int _cash) : TrafficCar(_damage, _cash)
    {
    }

    Sedan::~Sedan()
    {
    }

    void Sedan::OnCollision(const GameObject& other)
    {
    }

}