#include "../include/Player.h"

namespace RecklessDriver {
    Player::Player(int health, PlayerVehicle* pVehicle) :
        m_health(health), m_pVehicle(pVehicle)
    {

    }

    Player::~Player()
    {
    }
}

