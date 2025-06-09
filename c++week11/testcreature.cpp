/*CH-230-A
A11p3.c
Kamila Ziza
kziza@constructor.university
*/
#include "Creature.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Knight.\n";
    Knight k;
    k.run();
    k.fight();

    cout << "\nCreating a Dragon.\n";
    Dragon d;
    d.run();
    d.fire();

    cout << endl;

    return 0;
} 