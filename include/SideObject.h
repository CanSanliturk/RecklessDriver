#pragma once
#include "GameObject.h"

namespace RecklessDriver {

    class SideObject :
        public GameObject
    {
        int damage;
        int cash;
    protected:
        int count;
    public:
        SideObject();
        SideObject(int _damage, int _cash);
        ~SideObject();
        int GetDamage() const { return damage; }
        int GetCash() const { return cash; }
    };
}
