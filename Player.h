#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "ElementalTypes.h"

// forward declaration for Demon class to avoid compilation errors
class Demon;

using namespace std;

class Player {
    private:
        string name;
        bool defendMode;
        int hp, mp, lvl, atk, def, currentExp, expCap;
        Elements weaknesses[8];

    public:
        Player();
        Player(string);

        // get methods
        string getName();
        int getHP();
        int getMP();
        int getLVL();
        int getATK();
        int getDEF();
        int getCurrentExp();
        int getExpCap();
        bool getDefendMode();
        Elements* getWeaknesses();

        // set functions
        void setName(string);
        void setHP(int);
        void setMP(int);
        void setLVL(int);
        void setATK(int);
        void setDEF(int);
        void setCurrentExp(int);
        void setExpCap(int);
        void setDefendMode(bool);

        // default attack move
        void attackPhys(Demon&);

        // skill moves
        void attackZio(Demon&);
        void attackAgi(Demon&);
        void attackZan(Demon&);
        void attackBufu(Demon&);

        // overloading output operator
        friend ostream& operator<<(ostream&, const Player&);
};

#endif