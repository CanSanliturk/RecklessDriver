#pragma once
#include "TrafficCar.h"
namespace RecklessDriver {
    class Sedan :
        public TrafficCar
    {
    public:
        Sedan(int _damage, int _cash);
        ~Sedan();
        void OnCollision(const GameObject& other) override;
    };
}

