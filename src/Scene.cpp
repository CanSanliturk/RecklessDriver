#include <iostream>
#include <thread>
#include "../include/Scene.h"
#include "../include/FireHydrant.h"
#include "../include/LetterBox.h"
#include "../include/Sedan.h"
#include "../include/Van.h"

namespace RecklessDriver {

	Scene::Scene() :
		m_Engine(m_rd()) {

	}

	Scene::~Scene() { }

	void Scene::Start(Player* pPlayer) {
		m_pPlayer = pPlayer;
	}

	void Scene::GenerateNPCs() {

		if (sideObjects.size() > 6)
			sideObjects.erase(sideObjects.begin());

		if (trafficObjects.size() > 6)
			trafficObjects.erase(trafficObjects.begin());

		sideObjects.push_back(GenerateSideObjects());
		trafficObjects.push_back(GenerateTraffic());

		DisplaySideObjects();
		DisplayTraffic();
	}

	SideObject* Scene::GenerateSideObjects() {

		std::uniform_int_distribution<int> dist(0, SIDEOBJECT_COUNT - 1);

		switch(dist(m_Engine)) {

			case 0:
				return new FireHydrant(5, 10);
			case 1:
				return new LetterBox(8, 13);
			default:
				return nullptr;
		}
	}

	TrafficCar* Scene::GenerateTraffic() {

		std::uniform_int_distribution<int> dist(0, TRAFFIC_COUNT - 1);

		switch (dist(m_Engine)) {
			case 0:
				return new Sedan(5, 10);
			case 1:
				return new Van(8, 13);
			default:
				return nullptr;
		}

	}

	void Scene::DisplaySideObjects() {
		std::cout << ">>>>>SIDE OBJECTS<<<<<" << std::endl;
		for (auto pSO : sideObjects)
			std::cout << pSO->GetName() << std::endl;
		std::cout << std::endl;
	}

	void Scene::DisplayTraffic() {
		std::cout << ">>>>>TRAFFIC OBJECTS<<<<<" << std::endl;
		for (auto pTO : trafficObjects)
			std::cout << pTO->GetName() << std::endl;
		std::cout << std::endl;
	}

	void Scene::Collide() {
		std::uniform_int_distribution<int> dist(0, NPC_TYPES - 1);
		std::uniform_int_distribution<int> distSideObjects(0, sideObjects.size() - 1);
		std::uniform_int_distribution<int> distTrafficObjects(0, trafficObjects.size() - 1);
		GameObject* pGo = nullptr;

		switch (dist(m_Engine)) {
			case 0:
				pGo = sideObjects.at(distSideObjects(m_Engine));
				break;

			case 1:
				pGo = trafficObjects.at(distTrafficObjects(m_Engine));			
				break;

			default:
				break;
		}

		if (pGo)
		{
			pGo->OnCollision(*m_pPlayer);
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}
	}
}
