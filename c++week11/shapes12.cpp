/*CH-230-A
A12p1.c
Kamila Ziza
kziza@constructor.university
*/

#include "Shapes.h"
#include <iostream>
#include <cmath>

using namespace std;

// Parametric Constructor for Shape class.
Shape::Shape(const string& n) : name(n){
	cout << "Parametric Constructor for Shape class" << endl;
}

// Default Constructor for Shape class.
Shape::Shape(){
	name = "DEFAULT";
	cout << "Default Constructor for Shape class" << endl;
}

// Copy Constructor for Shape class.
Shape::Shape(const Shape&s){
    name = s.name; 
    cout << "Copy Constructor for Shape class" << endl;
}

// Parent method used in later inherited classes.
void Shape::printName() const{
	cout << name << endl;
}

// Setter for Shape class.
void Shape::setName(string n){
	name = n;
}

// Getter for Shape class.
string Shape::getName(){
    return name;
}

// Destructor for Shape class.
Shape::~Shape(){
	cout << "Destructor for Shape class" << endl;
}

// Parametric Constructor for CenteredShape class.
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n){
	x = nx;
	y = ny;
	cout << "Parametric Constructor for CenteredShape class" << endl;
}

// Default Constructor for CenteredShape class.
CenteredShape::CenteredShape(){
	x = 0;
	y = 0;
	cout << "Default Constructor for CenteredShape class" << endl;
}

// Copy Constructor for CenteredShape class.
CenteredShape::CenteredShape(const CenteredShape&cs){
	x = cs.x;
	y = cs.y;
    cout << "Copy Constructor for CenteredShape class" << endl;
}

// Move method for CenteredShape class.
void CenteredShape::move(double nx, double ny){
	x += nx;
	y += ny;
}

// Setters for CenteredShape class.
void CenteredShape::setX(double nx){
	x = nx;
}

void CenteredShape::setY(double ny){
	y = ny;
}

// Getters for CenteredShape class.
double CenteredShape::getX(){
    return x;
}

double CenteredShape::getY(){
    return y;
}

// Destructor for CenteredShape class.
CenteredShape::~CenteredShape(){
	cout << "Destructor for CenteredShape class" << endl;
}

// Parametric Constructor for RegularPolygon class.
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n, nx, ny) 
{
	EdgesNumber = nl;
	cout << "Parametric Constructor for RegularPolygon class" << endl;
}

// Default Constructor for RegularPolygon class.
RegularPolygon::RegularPolygon(){
	EdgesNumber = 0;
	cout << "Default Constructor for RegularPolygon class" << endl;
}

// Copy Constructor for RegularPolygon class.
RegularPolygon::RegularPolygon(const RegularPolygon&rp){
	EdgesNumber = rp.EdgesNumber;
    cout << "Copy Constructor for RegularPolygon class" << endl;
}

// Setter for EdgesNumber in RegularPolygon class.
void RegularPolygon::setEdgesNumber(int nedgesnumber){
	EdgesNumber = nedgesnumber;
}

// Getter for EdgesNumber in RegularPolygon class.
int RegularPolygon::getEdgesNumber(){
    return EdgesNumber;
}

// Destructor for RegularPolygon class.
RegularPolygon::~RegularPolygon(){
	cout << "Destructor for RegularPolygon class" << endl;
}

// Parametric constructor for Hexagon class.
Hexagon::Hexagon(const string& n, double nx, double ny, int nside) :
	RegularPolygon(n, nx, ny, 6)
{
	t = nside;
	cout << "Parametric Constructor for Hexagon class" << endl;
}

// Default constructor for Hexagon class.
Hexagon::Hexagon(){
	t = 0;
	cout << "Default Constructor for Hexagon class" << endl;
}

// Copy constructor for Hexagon class.
Hexagon::Hexagon(const Hexagon&hg){
	t = hg.t;
    cout << "Copy Constructor for Hexagon class" << endl;
}

// Perimeter calculation for Hexagon class.
double Hexagon::perimeter(){
	double perimeter;
	perimeter = 6 * t;
	return perimeter;
}

// Area calculation for Hexagon class.
double Hexagon::area(){
	double area;
	area = (((3 * sqrt(3)) / 2) * pow(t, 2));
	return area;
}

// Setter for Hexagon class.
void Hexagon::setSide(double nside){
	t = nside;
}

// Getter for Hexagon class.
double Hexagon::getSide(){
    return t;
}

// Destructor for Hexagon class.
Hexagon::~Hexagon(){
	cout << "Destructor for Hexagon class" << endl;
}
