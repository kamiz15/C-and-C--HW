/*CH-230-A
A12p5.c
Kamila Ziza
kziza@constructor.university
*/

#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}
/*
void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}*/

//Overloaded operator << using friend = 2 parameters.
std::ostream& operator << (std::ostream &output, Fraction &fr)
{	
	output << fr.num << "/" << fr.den << endl;
	return output;
}

std::istream& operator >> (std::istream &input, Fraction &fr)
{
	input >> fr.num >> fr.den;
	for(;;){

		if((fr.den != 0) && (fr.num != 0)){
			break;
		}
		else{
			cin.clear();
			cin.ignore();
			cout << "Math Error! Entering 0 or other characters is illegal! "; 
			cout << "Please re-enter the whole fraction" << endl;
            input >> fr.num >> fr.den;
		
		}
	}
	return input;
}