/*CH-230-A
A10p4 .c
Kamila Ziza
kziza@constructor.university
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	double energy;
	int age;
	double thirst;
	double ConvToDouble(int hunger);
    int ConvToInt(double hunger);
	double Thirst(double hunger);
	

public: // business logic methods are public
	//Three constructors to the class Critter.
    Critter();
    Critter(std::string &newname);
    Critter(std::string &newname, int newboredom, double newenergy, 
            int newage, int newhunger, double newheight = 10.0);
	Critter(std::string &newname, int newboredom, double newenergy, 
            int newage, int newhunger,int newthirst,
			double newheight = 10.0);
	// setter methods
	void setName(std::string &newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setAge(int newage);
	void setEnergy(double newenergy);
	void setThirst(int newthirst);
	// getter method
	int getHunger();
	int getEnergy();
	int getAge();
	int getThirst();
	// service method
	void print();
};