#pragma once
#include "SideObject.h"

namespace RecklessDriver {

    class LetterBox :
        public SideObject
    {
    public:
        LetterBox();
        LetterBox(int damage, int cash);
        ~LetterBox();
        void OnCollision(const GameObject& other);
    };

}
