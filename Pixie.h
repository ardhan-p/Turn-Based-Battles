#ifndef PIXIE_H
#define PIXIE_H
#include "Demon.h"
#include "Player.h"

using namespace std;

class Pixie : public Demon {
    public:
        Pixie();
        ~Pixie();

        void attackZan(Player&);
};

#endif