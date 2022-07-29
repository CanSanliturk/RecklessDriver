#include <iostream>
#include "../include/GameManager.h"
#include "../include/PlayerVehicle.h"
#include "../include/Player.h"

namespace RecklessDriver
{
    GameManager::GameManager() : m_cash(0) {

    }

    GameManager::~GameManager() {

    }

    void GameManager::NewGame() {
        // choose vehicle
        PlayerVehicle* pVehicle = new PlayerVehicle("Sedan", 5, 70, 4);

        // create a player object
        Player* pPlayer = new Player(100, pVehicle);

        // prepare the scenery

        // run a loop
        while (pPlayer->IsAlive())
        {
            // generate game objects (sideobjects, traffic, etc)

            // collide with other objects
        }
    }
    void GameManager::EndGame()
    {
        std::cout << "Total Cash Accumulated: " << m_cash << std::endl;
    }
}
