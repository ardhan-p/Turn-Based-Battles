#include <iostream>
#include "DemonFolder/Demon.h"
#include "DemonFolder/Odin.h"
#include "DemonFolder/JackFrost.h"
#include "DemonFolder/Pixie.h"
#include "Player.h"

using namespace std;

int main() {
    Player p1("Flynn");
    JackFrost jack;

    cout << jack << endl;
    cout << p1 << endl;
    p1.attackPhys(jack);
    cout << jack << endl;
}