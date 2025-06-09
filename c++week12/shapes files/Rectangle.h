/*CH-230-A
A12p6.c
Kamila Ziza
kziza@constructor.university
*/

#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"
#include "Perimeter.h"

class Rectangle : public Area {
	public:
		Rectangle(const char *n, double a, double b);
		~Rectangle();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double length;
		double width;
};

#endif
