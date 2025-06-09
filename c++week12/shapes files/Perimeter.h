/*CH-230-A
A12p6.c
Kamila Ziza
kziza@constructor.university
*/
#ifndef _PERIMETER_H
#define _PERIMETER_H

class Perimeter {
	public:
		Perimeter(const char *n);
		virtual ~Perimeter();
		void getColor2() const;
		virtual double calcPerimeter() const = 0;
	private:
		char color[11];
};
#endif