#pragma once

namespace RecklessDriver {

    class GameManager
    {
        int m_cash;

    public:

        GameManager();

        ~GameManager();

        int GetCash() const {
            return m_cash;
        }

        void AddCash(int amount) {
            m_cash += amount;
        }
        
        void NewGame();

        void EndGame();
    };

}

