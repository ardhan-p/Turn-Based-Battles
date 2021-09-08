#include <iostream>
#include <string>
#include "Demon.h"
#include "Player.h"

using namespace std;

Demon::Demon() {
    this->name = "Default Demon";
    this->defendMode = false;
    this->hp = 0;
    this->mp = 0;
    this->lvl = 0;
    this->atk = 0;
    this->def = 0;
    this->exp = 0;
}

Demon::~Demon() {
    cout << this->name << " defeated!" << endl;   
}

string Demon::getName() {
    return this->name;
}

int Demon::getHP() {
    return this->hp;
}

int Demon::getMP() {
    return this->mp;
}

int Demon::getLVL() {
    return this->lvl;
}

int Demon::getATK() {
    return this->atk;
}

int Demon::getDEF() {
    return this->def;
}

int Demon::getEXP() {
    return this->exp;
}

bool Demon::getDefendMode() {
    return this->defendMode;
}

Elements* Demon::getWeaknesses() {
    return this->weaknesses;
}

void Demon::setName(string name) {
    this->name = name;
}

void Demon::setHP(int hp) {
    this->hp = hp;
}

void Demon::setMP(int mp ) {
    this->mp = mp;
}

void Demon::setLVL(int lvl) {
    this->lvl = lvl;
}

void Demon::setATK(int atk) {
    this->atk = atk;
}

void Demon::setDEF(int def) {
    this->def = def;
}

void Demon::setEXP(int exp) {
    this->exp = exp;
}

void Demon::setDefendMode(bool defendMode) {
    this->defendMode = defendMode;
}

void Demon::attackPhys(Player &p1) {
    p1.setHP(this->atk - p1.getDEF());
}