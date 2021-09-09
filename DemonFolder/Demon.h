#ifndef DEMON_H
#define DEMON_H
#include <iostream>
#include <string>
#include "../ElementalTypes.h"

// forward declaration for Player class to avoid compilation errors
class Player;

using namespace std;

class Demon {
    protected:
        // stats
        string name;
        int hp, mp, lvl, atk, def, exp;
        bool defendMode;
        Elements weaknesses[8];

    public:
        Demon();
        virtual ~Demon();

        // get methods
        string getName();
        int getHP();
        int getMP();
        int getLVL();
        int getATK();
        int getDEF();
        int getEXP();
        bool getDefendMode();
        Elements* getWeaknesses();

        // set functions
        void setName(string);
        void setHP(int);
        void setMP(int);
        void setLVL(int);
        void setATK(int);
        void setDEF(int);
        void setEXP(int);
        void setDefendMode(bool);

        // default attack move
        void attackPhys(Player&);

        // overloading stream operators
        friend ostream& operator<<(ostream&, const Demon&);
};

#endif