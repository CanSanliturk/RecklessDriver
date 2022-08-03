#pragma once

namespace RecklessDriver {

    class GameManager
    {
        int m_cash;
        void Drive();
        GameManager();

    public:

        ~GameManager();

        int GetCash() const {
            return m_cash;
        }

        void AddCash(int amount) {
            m_cash += amount;
        }
        
        void NewGame();
        void EndGame();
        static GameManager& GetInstance() {
            static GameManager instance;
            return instance;
        }
    };

}

