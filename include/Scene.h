#pragma once
#include <vector>
#include <random>
#include "SideObject.h"
#include "TrafficCar.h"
#include "Player.h"

namespace RecklessDriver {

 	class Scene {
		std::vector<SideObject*> sideObjects;
		std::vector<TrafficCar*> trafficObjects;
		std::random_device m_rd;
		std::default_random_engine m_Engine;
		std::uniform_int_distribution<int> m_Distribution;

		Player *m_pPlayer;

		SideObject* GenerateSideObjects();
		TrafficCar* GenerateTraffic();

		void DisplaySideObjects();
		void DisplayTraffic();

		const int SIDEOBJECT_COUNT = 2;
		const int TRAFFIC_COUNT = 2;
		const int NPC_TYPES = 2;

	public:
		Scene();
		~Scene();

		void Start(Player* pPlayer);
		void GenerateNPCs();
		void Collide();
	};
}
