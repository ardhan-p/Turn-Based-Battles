#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

using namespace std;

class Player {
    private:
        string name;
        int hp, mp, lvl, atk, def, currentExp, expCap;

    public:
        Player();
};

#endif