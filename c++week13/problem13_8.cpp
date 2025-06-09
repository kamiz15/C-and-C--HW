/*CH-230-A
A13p8.c
Kamila Ziza
kziza@constructor.university
*/

#include <iostream>
#include <exception>
using namespace std;

class Motor {
public:
    Motor() {}
    ~Motor() {}

    // Function used by child classes when there are errors with instantiations and constructors.
    string what() throw() {
        string what1 = "This motor has problems";
        return what1;
    }
};

// Inheritance with basic constructors.
class Car : public Motor {
public:
    Car() {}
    ~Car() {}
};

class Garage : public Car {
public:
    // Parametric constructor for Garage.
    Garage(string ga) {
        cout << ga << endl;
    }

    // Try inheriting with a mismatched constructor and throw an exception.
    Garage() try : Car() {
        throw Garage("The car in this garage has problems with the motor");
    } catch (Motor& mo) {
        // Catch the exception and print the error from the what() function.
        cerr << mo.what() << endl;
    }
};

int main() {
    // Try default instantiation of Garage.
    try {
        Garage ga;
    } catch (Garage& ga) {
        // If failed, print the error from the function.
        cout << ga.what() << endl;
    }

    return 0;
}
