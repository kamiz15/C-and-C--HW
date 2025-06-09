/*CH-230-A
A13p2.c
Kamila Ziza
kziza@constructor.university
*/

#include <string>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    // Default Constructor.
    Complex();

    // Parametric Constructor.
    Complex(float newreal, float newimaginary);

    // Copy Constructor.
    Complex(const Complex&);

    // Setters, only needed for conjugate.
    void setReal(float newreal);
    void setImaginary(float newimaginary);

    // Getters, only needed for conjugate.
    int getReal();
    int getImaginary();

    // Overload << using friend function.
    friend std::ostream& operator<<(std::ostream&, Complex&);

    // Overload >> using friend function.
    friend std::istream& operator>>(std::istream&, Complex&);

    // Overload * using class object.
    Complex operator*(Complex p);

    // Overload + using class object.
    Complex operator+(Complex a);

    // Overload - using class object.
    Complex operator-(Complex d);

    // Overload = using class object.
    Complex& operator=(const Complex& e);

    // Compute the conjugate of the given complex number.
    Complex conjugate(Complex& c1);

    // Destructor.
    ~Complex();
};
