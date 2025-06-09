/*CH-230-A
A11p4.c
Kamila Ziza
kziza@constructor.university
*/

#include <iostream>

using namespace std;
//parent class for 3 child classes 
class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};
// inherted class wizard form parent class Cretaure.
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
        ~Wizard();

	private:
		int distFactor;
};
// inherted class knight form parent class Cretaure.
class Knight : public Creature {
	public:
		Knight();
		void fight() const;
        ~Knight();

	private:
		int weapon;
};
// inherted class dragon form parent class Cretaure.
class Dragon : public Creature {
	public:
		Dragon();
		void fire() const;
        ~Dragon();

	private:
		double energy;
};
