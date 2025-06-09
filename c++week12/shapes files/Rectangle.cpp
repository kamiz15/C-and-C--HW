/*CH-230-A
A12p6.c
Kamila Ziza
kziza@constructor.university
*/

#include <iostream>
#include "Rectangle.h"


Rectangle::Rectangle(const char *n, double a, double b) : Area(n),
 Perimeter(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...";
	return length*width;
}
double Rectangle::calcPerimeter() const {
    std::cout << "calcPerimeter of Rectangle...";
    return 2 * (length + width);
}