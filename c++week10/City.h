/*CH-230-A
A10p3.c
Kamila Ziza
kziza@constructor.university
*/

#include <string>

class City{
private:
    //Private variables.
    std::string monument;
    int population;
    double area;

public:
    //All the methods applicable for all instances.
    //Setters, printers and getters.
    void setMonument(std::string &newmonument);
    void setPopulation(int newpopulation);
    void setArea(double newarea);
    void print();
    int getPopulation();
    double getArea();
};
