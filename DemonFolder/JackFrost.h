#ifndef JACKFROST_H
#define JACKFROST_H
#include "Demon.h"

class Player;

using namespace std;

class JackFrost : public Demon {
    public:
        JackFrost();
        ~JackFrost();

        void attackBufula(Player&);
};

#endif