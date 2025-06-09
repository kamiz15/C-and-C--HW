/*CH-230-A
A10p4.c
Kamila Ziza
kziza@constructor.university
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;


int main(int argc, char** argv){
	
    string name = "Kami";

    //4 unique instances of critters.
    Critter c_1;
    Critter c_2(name);
    Critter c_3(name, 6, 96.2, 57, 2);
    Critter c_4(name, 6, 77.7, 7, 2, 42.9);

    //Printing the instances.
    c_1.print();
    c_2.print();
    c_3.print();
    c_4.print();
    return 0;
}