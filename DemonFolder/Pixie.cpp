#include <iostream>
#include <string>
#include "Pixie.h"
#include "../Player.h"

using namespace std;

Pixie::Pixie() {
    Demon();
    this->name = "Pixie";
    this->hp = 30;
    this->mp = 20;
    this->lvl = 3;
    this->atk = 5;
    this->def = 3;
    this->exp = 35;
    this->weaknesses[0] = Ice; 
}

Pixie::~Pixie() {

}

void Pixie::attackZan(Player &p1) {
    int power = this->atk - p1.getDEF() + 3;

    // checks for weakness in player
    for (int i = 0; i < 8; i++) {
        if (*(p1.getWeaknesses() + i) == Force) {
            power *= 1.5;
        }
    }

    if (p1.getDefendMode() == true) {
        power *= 0.75;
    }

    p1.setHP(p1.getHP() - power);
    this->mp = mp - 2;
}