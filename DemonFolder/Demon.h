#ifndef DEMON_H
#define DEMON_H
#include <iostream>
#include <string>
#include "../Player.h"
#include "../ElementalTypes.h"

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

        // get methods
        string getName();
        int getHP();
        int getMP();
        int getLVL();
        int getATK();
        int getDEF();
        int getEXP();

        // set functions
        string setName(string);
        void setHP(int);
        void setMP(int);
        void setLVL(int);
        void setATK(int);
        void setDEF(int);
        void setEXP(int);

        // change defence mode
        void defendMode(bool);

        // default attack move
        void attack(Player&);
};

#endif