#ifndef ODIN_H
#define ODIN_H
#include "Demon.h"

class Player;

using namespace std;

class Odin : public Demon {
    public:
        Odin();
        ~Odin();

        void attackZiodyne(Player&);
};

#endif