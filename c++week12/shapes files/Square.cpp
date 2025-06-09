/*CH-230-A
A12p6.c
Kamila Ziza
kziza@constructor.university
*/
#include <iostream>
#include "Square.h"

Square::Square(const char *n, double a) 
                : Rectangle(n, a, a) {
    length = a;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return length * length;
}

double Square::calcPerimeter() const {
    std::cout << "calcPerimeter of Square...";
    return 4 * length;
}