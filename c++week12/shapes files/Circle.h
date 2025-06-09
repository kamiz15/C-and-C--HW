/*CH-230-A
A12p6.c
Kamila Ziza
kziza@constructor.university
*/

#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"
#include "Perimeter.h"


class Circle : public Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double radius;
};

#endif
