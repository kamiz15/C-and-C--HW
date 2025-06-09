/*CH-230-A
A11p1 .c
Kamila Ziza
kziza@constructor.university
*/
#include <iostream>
#include "Box.h"
using namespace std;

//Constructor for default box.
Box::Box(){
	height = 0;
    width = 0;
    depth = 0;
}
//The other two constructors
Box::Box(double newheight, double newwidth, double newdepth){
    height = newheight;
    width = newwidth;
    depth = newdepth;
}
Box::Box(const Box& k) {
    height = k.height;
    width = k.width;
    depth = k.depth;
}
// other methods 
double Box::Volume(double newheight, double newwidth, double newdepth){
    return newheight * newwidth * newdepth;
}
void Box::print() {
	cout <<"The volume of the box is " << Volume(height, width, depth)  << endl;
}
void Box::setHeight(double newheight) {
	height = newheight;
}
void Box::setWidth(double newwidth) {
	width = newwidth;
}
void Box::setDepth(double newdepth) {
	depth = newdepth;
}
double Box::getHeight(){
    return height;
}
double Box::getWidth(){
    return width;
}
double Box::getDepth(){
    return depth;
}

// destructor
Box::~Box(){
    cout << "Using Destructor now" << endl;
}


	
