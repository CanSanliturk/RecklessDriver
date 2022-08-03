#include <thread>
#include <iostream>
#include "../include/GameManager.h"
#include "../include/PlayerVehicle.h"
#include "../include/Player.h"
#include "../include/Scene.h"

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
        Scene scene;
        scene.Start(pPlayer);

        // run a loop
        while (pPlayer->IsAlive())
        {
            system("clear");
            // generate game objects (sideobjects, traffic, etc)
            scene.GenerateNPCs();
            Drive();
            
            // collide with other objects
            scene.Collide();
        }
    }
    
    void GameManager::EndGame()
    {
        std::cout << "Total Cash Accumulated: " << m_cash << std::endl;
    }

    void GameManager::Drive() {
        std::cout << "\nPlayer is driving" << std::endl;

        for (int i = 0; i < 10; ++i)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(300));
            std::cout << ".";            
        }
        std::cout << std::endl;
    }
}
