/*CH-230-A
A10p3.c
Kamila Ziza
kziza@constructor.university
*/


#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv) {
    // Create three instances of the City class: Bremen, Paris, and London.

    City Bremen, Paris, London;

    // Variables for user input.
    string monument;
    int population;
    double area;

    // Prompt user for input.
    cout << endl << "Please enter data" << endl;

    // Use setters to set the features of each city.
    cout << "Population of Bremen: ";
    cin >> population;
    Bremen.setPopulation(population);

    cout << "Population of Paris: ";
    cin >> population;
    Paris.setPopulation(population);

    cout << "Population of London: ";
    cin >> population;
    London.setPopulation(population);

    cout << endl;

    cout << "Monument of Bremen: ";
    cin >> monument;
    Bremen.setMonument(monument);

    cout << "Monument of Paris: ";
    cin >> monument;
    Paris.setMonument(monument);

    cout << "Monument of London: ";
    cin >> monument;
    London.setMonument(monument);

    cout << endl;

    cout << "Area of Bremen: ";
    cin >> area;
    Bremen.setArea(area);

    cout << "Area of Paris: ";
    cin >> area;
    Paris.setArea(area);

    cout << "Area of London: ";
    cin >> area;
    London.setArea(area);

    cout << endl;

    // Print the set values for each city.
    cout << endl << "You have created:" << endl << endl;

    cout << "Bremen\n";
    Bremen.print();

    cout << "Paris\n";
    Paris.print();

    cout << "London\n";
    London.print();

    return 0;
}
