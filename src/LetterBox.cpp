#include <iostream>
#include "../include/LetterBox.h"
#include "../include/Player.h"

namespace RecklessDriver {

    LetterBox::LetterBox(int damage, int cash)
        : SideObject(damage, cash)
    {
        SetName("LetterBox");
    }
    
    LetterBox::~LetterBox()
    {

    }
    
    void LetterBox::OnCollision(const GameObject& other)
    {
        if (other.GetName() == "Player")
        {
            auto p = (Player&)other;
            if (!count) {
                std::cout << "#### COLLISION -> [LetterBox] Letters falling" << std::endl;
                p.ApplyDamage(GetDamage(), GetCash());
            }
            else {
                std::cout << "#### COLLISION -> [LetterBox] Collided Again" << std::endl;
                p.ApplyDamage(GetDamage(), GetCash() * count);
            }
        }
    }
}