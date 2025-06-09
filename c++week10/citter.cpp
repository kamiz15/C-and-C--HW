/*CH-230-A
A10p4.c
Kamila Ziza
kziza@constructor.university
*/
#include <iostream>
#include "Critter.h"
using namespace std;

//Constructor for default critter.
Critter::Critter(){
    name = "default_critter";
	hunger = 0;
    boredom = 0;
    height = 5;
    energy = 0;
    age = 0;
}
//The other two constructor for Kami constructor.
Critter::Critter(string &newname){
    name = newname;
	hunger = 0;
    boredom = 0;
    height = 5;
    energy = 0;
    age = 0;  
}
Critter::Critter(string &newname, int newboredom, double newenergy, 
				int newage, int newhunger, double newheight){
    name = newname;
    boredom = newboredom;
    energy = newage;
    age = newage;
    hunger = newhunger;
    height = newheight;
}
//New constructor that has the thirst variable.
Critter::Critter(string &newname, int newboredom, double newenergy, 
				int newage, int newhunger, int newthirst,
                double newheight){
 
    name = newname;
    boredom = newboredom;
    energy = newenergy;
    age = newage;
    hunger = newhunger;
    thirst = newthirst;
    height = newheight;

} 

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}
void Critter::setAge(int newage) {
	age = newage;
}
void Critter::setEnergy(double newenergy) {
	energy = newenergy;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger 
	<< "."<< "my energy level is "<< energy<<". My age is "<< age<< "." << endl;
	cout << "My thirst level is " << Thirst(hunger) << endl;

}

int Critter::getHunger() {
	return hunger;
}
int Critter::getAge() {
	return age;
}
int Critter::getEnergy() {
	return energy;
}
int Critter::getThirst(){
    return thirst;
}
//Two new methods, one to convert to int, and another to double.
double Critter::ConvToDouble(int hunger){
    double newhunger;
    newhunger = hunger / 10;
    return newhunger;
}
int Critter::ConvToInt(double hunger){
    int newhunger;
    newhunger = hunger * 10;
    return newhunger;
}
//Method to have hunger and thirst in the same level.
double Critter::Thirst(double hunger){
    int newthirst;
    newthirst = hunger;
    return newthirst;
}