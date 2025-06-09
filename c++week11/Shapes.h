/*CH-230-A
A11p5.c
Kamila Ziza
kziza@constructor.university
*/
/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name 
        //Setters.
        void setName(std::string n);

        //Getters.
        std::string getName();

		//Destructor.
		~Shape(); 
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  
        // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	
        // moves the shape, i.e. it modifies it center
        //Setters.
        void setX(double nx);
		void setY(double ny);

        //Getters.
        double getX();
		double getY();

		//Destructor.
		~CenteredShape();
};

class RegularPolygon : public CenteredShape { 
    // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
        //Setter.
        void setEdgesNumber(int nedgesnumber);

        //Getter.
        int getEdgesNumber();

		//Destructor.
		~RegularPolygon();
};

class Circle : public CenteredShape {  
    // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
        
		//Math.
		double perimeter();
		double area();

		//Setter.
        void setRadius(double nradius);

        //Getter.
        double getRadius();

		//Destructor.
		~Circle();
};
class Rectangle : public RegularPolygon { 
    // a rectangle is a regular polygon with a number of edges
	private: 
        double Width;
		double Height;
	public:
		Rectangle(const std::string& n, double nx, double ny,
         double nwidth, double nheight); 
		Rectangle();
		Rectangle(const Rectangle&);

        //Math.
		double perimeter();
		double area();

        //Setters.
        void setWidth(double nwidth);
		void setHeight(double nheight);

        //Getters.
        double getWidth();
		double getHeight();

		//Destructor.
		~Rectangle();
};
class Square : public Rectangle { // a Square is a shape with only a side length
	private:
		double Side;
	public:
		//Parametric Constructor.
		Square(const std::string& n, double nx, double ny, double nside);
		//Default Constructor.
		Square();

		//Copy Constructor.
		Square(const Square&);

		//Math.
		double perimeter();
		double area();

		//Setter.
        void setSide(double nside);

        //Getter.
        double getSide();

		//Destructor.
		~Square();
};
#endif