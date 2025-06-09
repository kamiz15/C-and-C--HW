/*CH-230-A
A13p7.c
Kamila Ziza
kziza@constructor.university
*/

#include <iostream>
#include <exception>
using namespace std;

class OwnException : public exception {
public:
    // Constructor with a message and print it.
    OwnException(string ownstring) {
        cout << ownstring << endl;
    }

    // Overridden what() function to provide exception information.
    virtual const char* what() const throw() {
        return "OwnException\n";
    }
};

// Function to handle exceptions based on a switch case.
void exceptionHandle(int number) {
    // Throw different types of exceptions based on the input number.
    switch (number) {
    case 1:
        throw 'a';  // Char exception.
        break;

    case 2:
        throw 12;   // Integer exception.
        break;

    case 3:
        throw true; // Boolean exception.
        break;

    default:
        throw OwnException("Default case exception"); // Custom exception.
    }
}

// Try different scenarios and catch the respective exceptions.
int main() {
    try {
        exceptionHandle(1);
    }
    // Catch and handle character exception.
    catch (char aChar) {
        cerr << "Caught in main: " << aChar << endl;
    }

    try {
        exceptionHandle(2);
    }
    // Catch and handle integer exception.
    catch (int number) {
        cerr << "Caught in main: " << number << endl;
    }

    try {
        exceptionHandle(3);
    }
    // Catch and handle boolean exception.
    catch (bool bTrue) {
        cerr << "Caught in main: " << boolalpha << (bool)bTrue << endl;
    }

    try {
        exceptionHandle(4);
    }
    // Catch and handle custom exception.
    catch (OwnException& def) {
        cerr << "Caught in main: " << def.what() << endl;
    }

    return 0;
}

