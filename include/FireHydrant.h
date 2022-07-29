#pragma once
#include "SideObject.h"

namespace RecklessDriver {

    class FireHydrant :
        public GameObject
    {
    public:
        FireHydrant();
        ~FireHydrant();
        void OnCollision(const GameObject& other);
    };

}
