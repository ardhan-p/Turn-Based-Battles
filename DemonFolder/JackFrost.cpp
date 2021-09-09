#include <iostream>
#include <string>
#include "JackFrost.h"
#include "../Player.h"

using namespace std;

JackFrost::JackFrost() {
    Demon();
    this->name = "Jack Frost";
    this->hp = 50;
    this->mp = 25;
    this->lvl = 5;
    this->atk = 8;
    this->def = 5;
    this->exp = 75;
    this->weaknesses[0] = Fire;
}

JackFrost::~JackFrost() {

}

void JackFrost::attackBufula(Player &p1) {
    int power = this->atk - p1.getDEF() + 5;

    // checks for weakness in player
    for (int i = 0; i < 8; i++) {
        if (*(p1.getWeaknesses() + i) == Ice) {
            power *= 1.5;
        }
    }

    if (p1.getDefendMode() == true) {
        power *= 0.75;
    }

    p1.setHP(p1.getHP() - power);
    this->mp = mp - 4;
}

