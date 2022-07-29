#include "../include/PlayerVehicle.h"

namespace RecklessDriver {

    PlayerVehicle::PlayerVehicle(const std::string& name, int handling, int topSpeed, int strength) :
        m_name(name), m_handling(handling), m_topSpeed(topSpeed), m_strength(strength)
    {
    }
}