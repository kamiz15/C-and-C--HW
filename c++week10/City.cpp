/*CH-230-A
A10p3.c
Kamila Ziza
kziza@constructor.university
*/

#include <iostream>
#include "City.h"

using namespace std;

// we do all the required methods.
void City::setMonument(string &newmonument){
    monument = newmonument;
}

void City::setPopulation(int newpopulation){
    population = newpopulation;
}

void City::setArea(double newarea){
    area = newarea;
}

void City::print(){
    cout << "Population: " << population << "\n" 
         << "Monument: " << monument << "\n" << "Area: " << area << "\n" 
         << endl;
}

int City::getPopulation(){
    return population;
}

double City::getArea(){
    return area;
}
