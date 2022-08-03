#pragma once
#include "TrafficCar.h"
namespace RecklessDriver {
    class Van :
        public TrafficCar
    {
    public:
        Van(int _damage, int _cash);
        ~Van();
        void OnCollision(const GameObject& other) override;
    };
}

