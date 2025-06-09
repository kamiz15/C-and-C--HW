/*CH-230-A
A11p5.c
Kamila Ziza
kziza@constructor.university
*/

#include "Shapes.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
  // Invoke the default constructor for Circle.
  Circle cd;

  // Create a Circle using the parametric constructor.
  Circle c("First Circle", 3, 4, 7);

  // Default constructor for RegularPolygon.
  RegularPolygon rd;

  // Create a RegularPolygon using the parametric constructor.
  RegularPolygon r("Triangle", 1, 1, 3);

  // Default constructor for Rectangle.
  Rectangle red;

  // Create a Rectangle using the parametric constructor.
  Rectangle re("Rectangle", 1, 2, 3, 4);

  // Default constructor for Square.
  Square sd;

  // Create a Square using the parametric constructor.
  Square s("Square", 5, 6, 7);

  // Use the parent class method to print the name.
  cd.printName();

  // Use two math methods for the Circle class using the correct syntax.
  cout << "The area of the default Circle is: " << cd.area() << endl;
  cout << "The circumference of the default Circle is: " << cd.perimeter() << endl;

  // Print the name of the Circle and use math methods.
  c.printName();
  cout << "The area of the Circle is: " << c.area() << endl;
  cout << "The circumference of the Circle is: " << c.perimeter() << endl;

  // These class objects don't have math methods.
  rd.printName();
  r.printName();

  // Similar to the Circle class.
  red.printName();
  cout << "The area of the default Rectangle is: " << red.area() << endl;
  cout << "The perimeter of the default Rectangle is: " << red.perimeter() << endl;

  // Print the name of the Rectangle and use math methods.
  re.printName();
  cout << "The area of the Rectangle is: " << re.area() << endl;
  cout << "The perimeter of the Rectangle is: " << re.perimeter() << endl;

  // Print the name of the Square and use math methods.
  sd.printName();
  cout << "The area of the default Square is: " << sd.area() << endl;
  cout << "The perimeter of the default Square is: " << sd.perimeter() << endl;

  // Print the name of the Square and use math methods.
  s.printName();
  cout << "The area of the Square is: " << s.area() << endl;
  cout << "The perimeter of the Square is: " << s.perimeter() << endl;

  return 0;
}
