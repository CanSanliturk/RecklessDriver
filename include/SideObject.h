#pragma once
#include "GameObject.h"

namespace RecklessDriver {

    class SideObject :
        public GameObject
    {
        int damage;
        int cash;
        int count;
    public:
        SideObject(int _damage, int _cash);
        ~SideObject();
    };
}
