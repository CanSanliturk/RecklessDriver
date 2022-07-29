#pragma once
#include "GameObject.h"
#include "PlayerVehicle.h"

namespace RecklessDriver {

    class Player : 
        public GameObject
    {
        PlayerVehicle* m_pVehicle;
        int m_health;

    public:
        Player(int health, PlayerVehicle* pVehicle);
        ~Player();
        bool IsAlive() { return 0 < m_health; }
        void Accelerate() { m_pVehicle->Up(); }
        void Brake() { m_pVehicle->Down(); }
        void SteerRight() { m_pVehicle->Right(); }
        void SteerLeft() { m_pVehicle->Left(); }
        void ApplyDamage(int damage, int cash) { 
            m_health -= damage - m_pVehicle->GetStrength();

        }
    };
}

