#include <iostream>
#include <string>
#include "Player.h"
#include "DemonFolder/Demon.h"

using namespace std;

Player::Player() {
    this->name = "Default";
    this->defendMode = false;
    this->hp = 100;
    this->mp = 50;
    this->lvl = 1;
    this->atk = 10;
    this->def = 10;
    this->currentExp = 0;
    this->expCap = 100;
}

Player::Player(string name) {
    Player();
    this->name = name;
}

string Player::getName() {
    return this->name;
}

int Player::getHP() {
    return this->hp;
}

int Player::getMP() {
    return this->mp;
}

int Player::getLVL() {
    return this->lvl;
}

int Player::getATK() {
    return this->atk;
}

int Player::getDEF() {
    return this->def;
}

int Player::getCurrentExp() {
    return this->currentExp;
}

int Player::getExpCap() {
    return this->expCap;
}
bool Player::getDefendMode() {
    return this->defendMode;
}

Elements* Player::getWeaknesses() {
    return this->weaknesses;
}

void Player::setName(string name) {
    this->name = name;
}

void Player::setHP(int hp) {
    this->hp = hp;
}

void Player::setMP(int mp ) {
    this->mp = mp;
}

void Player::setLVL(int lvl) {
    this->lvl = lvl;
}

void Player::setATK(int atk) {
    this->atk = atk;
}

void Player::setDEF(int def) {
    this->def = def;
}

void Player::setCurrentExp(int currentExp) {
    this->currentExp = currentExp;
}

void Player::setExpCap(int expCap) {
    this->currentExp = expCap;
}

void Player::setDefendMode(bool defendMode) {
    this->defendMode = defendMode;
}

void Player::attackPhys(Demon &enemy) {
    int power = this->atk - enemy.getDEF();

    if (enemy.getDefendMode() == true) {
        power *= 0.75;
    }

    enemy.setHP(enemy.getHP() - power);
}

void Player::attackZio(Demon &enemy) {
    int power = this->atk - enemy.getDEF() + 7;

    // checks for weakness in player
    for (int i = 0; i < 8; i++) {
        if (*(enemy.getWeaknesses() + i) == Electric) {
            power *= 1.5;
        }
    }

    if (enemy.getDefendMode() == true) {
        power *= 0.75;
    }

    enemy.setHP(enemy.getHP() - power);
    this->mp = mp - 4;
}

void Player::attackAgi(Demon &enemy) {
    int power = this->atk - enemy.getDEF() + 7;

    // checks for weakness in player
    for (int i = 0; i < 8; i++) {
        if (*(enemy.getWeaknesses() + i) == Fire) {
            power *= 1.5;
        }
    }

    if (enemy.getDefendMode() == true) {
        power *= 0.75;
    }

    enemy.setHP(enemy.getHP() - power);
    this->mp = mp - 4;
}

void Player::attackZan(Demon &enemy) {
    int power = this->atk - enemy.getDEF() + 7;

    // checks for weakness in player
    for (int i = 0; i < 8; i++) {
        if (*(enemy.getWeaknesses() + i) == Force) {
            power *= 1.5;
        }
    }

    if (enemy.getDefendMode() == true) {
        power *= 0.75;
    }

    enemy.setHP(enemy.getHP() - power);
    this->mp = mp - 4;
}

void Player::attackBufu(Demon &enemy) {
    int power = this->atk - enemy.getDEF() + 7;

    // checks for weakness in player
    for (int i = 0; i < 8; i++) {
        if (*(enemy.getWeaknesses() + i) == Ice) {
            power *= 1.5;
        }
    }

    if (enemy.getDefendMode() == true) {
        power *= 0.75;
    }

    enemy.setHP(enemy.getHP() - power);
    this->mp = mp - 4;
}