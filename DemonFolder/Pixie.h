#ifndef PIXIE_H
#define PIXIE_H
#include "Demon.h"

class Player;

using namespace std;

class Pixie : public Demon {
    public:
        Pixie();
        ~Pixie();

        void attackZan(Player&);
};

#endif