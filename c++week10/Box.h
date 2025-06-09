/*CH-230-A
A11p1 .c
Kamila Ziza
kziza@constructor.university
*/

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

class Box{
private:
    double height;
    double width;
    double depth;

    

public:
    //Destructor.
	~Box();
    // setter method
	void setHeight(double newheight);
	void setWidth(double newwidth);
	void setDepth(double newdepth);
    //getter method
	double getHeight();
	double getWidth();
	double getDepth(); 

    // the constructors
    Box();
    Box(double newheight,double newwidth,double newdepth);
    Box(const Box& k);
    // volume method
    double Volume(double newheight, double newwidth, double newdepth);
    // service method
	void print();
};
