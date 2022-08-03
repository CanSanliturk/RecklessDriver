#include <iostream>
#include "../include/Player.h"
#include "../include/GameManager.h"

namespace RecklessDriver {
    Player::Player(int health, PlayerVehicle* pVehicle) :
        m_health(health), m_pVehicle(pVehicle)
    {
        SetName("Player");
    }

    Player::~Player()
    {
    }

    void Player::ApplyDamage(int damage, int cash) { 
        m_health -= damage - m_pVehicle->GetStrength();
        std::cout << "Health: " << (m_health > 0 ? m_health : 0) << std::endl;
        GameManager::GetInstance().AddCash(cash);
    }
}

