/*CH-230-A
A13p2.c
Kamila Ziza
kziza@constructor.university
*/
#include <iostream>
#include "Complex.h"
 
using namespace std;
 
// Default constructor with initialization to 0.
Complex::Complex() : real(0), imaginary(0) {
    cout << "Default Constructor" << endl;
}
 
// Parametric constructor.
Complex::Complex(float newreal, float newimaginary) : real(newreal), imaginary(newimaginary) {
    cout << "Parametric Constructor" << endl;
}
 
// Overloaded cout operator for printing Complex numbers.
std::ostream& operator<<(std::ostream& output, Complex& co) {
    if (co.imaginary) {
        output << (noshowpos) << co.real << (showpos) << co.imaginary << 'i' << endl;
    } else {
        output << (noshowpos) << co.real << (noshowpos) << endl;
    }
    return output;
}
 
// Overloaded cin operator for inputting Complex numbers.
istream& operator>>(istream& input, Complex& co) {
    input >> co.real >> co.imaginary;
    return input;
}
 
// Copy constructor.
Complex::Complex(const Complex& c1) : real(c1.real), imaginary(c1.imaginary) {
    cout << "Copy Constructor" << endl;
}
 
// Find the conjugate of the Complex number.
Complex Complex::conjugate(Complex& c1) {
    Complex conjugate;
    conjugate.setReal(real);
    conjugate.setImaginary(c1.getImaginary() * -1);
    return conjugate;
}
 
// Set the real part based on user input.
void Complex::setReal(float newreal) {
    real = newreal;
}
 
// Set the imaginary part based on user input.
void Complex::setImaginary(float newimaginary) {
    imaginary = newimaginary;
}
 
// Get the real part as an integer.
int Complex::getReal() {
    return static_cast<int>(real);
}
 
// Get the imaginary part as an integer.
int Complex::getImaginary() {
    return static_cast<int>(imaginary);
}
 
// Destructor simulator.
Complex::~Complex() {
    cout << "Destructor" << endl;
}
