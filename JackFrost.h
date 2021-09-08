#ifndef JACKFROST_H
#define JACKFROST_H
#include "Demon.h"
#include "Player.h"

using namespace std;

class JackFrost : public Demon {
    public:
        JackFrost();
        ~JackFrost();

        void attackBufula(Player&);
};


#endif