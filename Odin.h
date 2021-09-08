#ifndef ODIN_H
#define ODIN_H
#include "Demon.h"
#include "Player.h"

using namespace std;

class Odin : public Demon {
    public:
        Odin();
        ~Odin();

        void attackZiodyne(Player&);
};

#endif