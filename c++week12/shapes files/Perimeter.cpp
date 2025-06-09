/*CH-230-A
A12p6.c
Kamila Ziza
kziza@constructor.university
*/

#include <iostream>
#include <cstring>
#include "Perimeter.h"
using namespace std;

Perimeter::Perimeter(const char* n) {
	strncpy(color, n, 10);
	cout << "	       Perimeter constructor being called...\n";
}

Perimeter::~Perimeter() {
}

void Perimeter::getColor2() const {
	cout << "\n" << color << ": ";
}