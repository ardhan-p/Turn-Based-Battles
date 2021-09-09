#include <iostream>
#include <string>
#include "Odin.h"
#include "../Player.h"

using namespace std;

Odin::Odin() {
    Demon();
    this->name = "Odin";
    this->hp = 150;
    this->mp = 50;
    this->lvl = 10;
    this->atk = 15;
    this->def = 12;
    this->exp = 150;
    this->weaknesses[0] = Force; 
}

Odin::~Odin() {

}

void Odin::attackZiodyne(Player &p1) {
    int power = this->atk - p1.getDEF() + 15;

    // checks for weakness in player
    for (int i = 0; i < 8; i++) {
        if (*(p1.getWeaknesses() + i) == Electric) {
            power *= 1.5;
        }
    }

    if (p1.getDefendMode() == true) {
        power *= 0.75;
    }

    p1.setHP(p1.getHP() - power);
    this->mp = mp - 7;
}