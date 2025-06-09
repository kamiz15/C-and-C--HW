/*CH-230-A
A11p4.c
Kamila Ziza
kziza@constructor.university
*/

#include <iostream>
#include "Creature.h"
#include <cmath>
using namespace std;

// methods for the main class

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

// methods for inhereted class wizard

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
Wizard::~Wizard(){

    cout << "Destructor for Wizard" << endl;
}
// methods for inhereted class knight

Knight::Knight() : weapon(77)
{}  

void Knight::fight() const
{
    cout << "fighting power: " << (weapon - distance) << endl;
}
Knight::~Knight(){

    cout << "Destructor for Knight" << endl;

}
// methods for inhereted class dragon
Dragon::Dragon() : energy(163)
{}  

void Dragon::fire() const
{
    cout << "fire blast: " << (energy / distance)<< endl;
}
Dragon::~Dragon(){

    cout << "Destructor for Dragon" << endl;

}

