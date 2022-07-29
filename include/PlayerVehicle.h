#pragma once
#include <string>

namespace RecklessDriver {

    class PlayerVehicle
    {
        std::string m_name;
        int m_handling;
        int m_topSpeed;
        int m_strength;

    public:
        PlayerVehicle(const std::string& name, int handling, int topSpeed, int strength);
        const std::string& GetName() const { return m_name; }
        int GetHandling() const { return m_handling; }
        int GetTopSpeed() const { return m_topSpeed; }
        int GetStrength() const { return m_topSpeed; }
        void Up() {

        }
        void Down() {

        }
        void Left() {

        }
        void Right() {

        }

    };
}
