#pragma once
#include "SideObject.h"

namespace RecklessDriver {

    class FireHydrant :
        public SideObject
    {
    public:
        FireHydrant();
        FireHydrant(int damage, int cash);
        ~FireHydrant();
        void OnCollision(const GameObject& other);
    };

}
