/*CH-230-A
A11p6.c
Kamila Ziza
kziza@constructor.university
*/


#ifndef __VECTOR_H
#define __VECTOR_H

#include <string>
using namespace std;

class Vector{

    private: 
		
		//Properties of vector.
		int size; 
		double *ptr;

	public:

		//Default Constructor.
		Vector();	

		//Parametric Constructor.
		Vector(int); 
				
		//Copy Constructor.
		Vector(const Vector&);	

		//To print the vector.
		void printVector() const;	

		//Math.
		double norm();
		Vector add(const Vector) const;	
		Vector subtract(const Vector) const;
		double scalarproduct(const Vector);

		//Setters.
        void setSize(int);
		void setPointer(double *);

        //Getter.
		int getSize();

		//Destructor.
		~Vector();

};

#endif