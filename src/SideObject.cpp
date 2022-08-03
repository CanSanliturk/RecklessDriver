#include "../include/SideObject.h"

namespace RecklessDriver {

    SideObject::SideObject() :
        damage(0), cash(0) {
            
    }

    SideObject::SideObject(int _damage, int _cash) : 
        damage(_damage), cash(_cash), count(0)
    {
    }

    SideObject::~SideObject()
    {
    }
}