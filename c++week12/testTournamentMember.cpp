/*CH-230-A
A12p3.c
Kamila Ziza
kziza@constructor.university
*/

#include "TournamentMember.h"
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char** argv){
    
    //To invoke the Default constructor.
    TournamentMember player, coach, referee;

    //Nine parametric constructors, 3 for each types of tournament members.
    TournamentMember player1("Aa", "Bb", "1980-08-25", 25, 0.27);
    TournamentMember player2("Cc", "Dd", "1983-03-16", 41, 0.32);

    TournamentMember coach1("Ee", "Ff", "1999-06-01", 4, 0.87);
    TournamentMember coach2("Gg", "Hh", "2000-01-01", 91, 0.35);

    TournamentMember referee1("Ii", "Jj", "2005-04-24", 0, 0.99);
    TournamentMember referee2("Kk", "Ll", "2005-08-07", 0, 1.00);

    //Setting location to all the class objects.
    player.setLocation("Madrid");

    //Printers for their respective values.
    player.printStats();
    coach.printStats();
    referee.printStats();

    player1.printStats();
    player2.printStats();

    coach1.printStats();
    coach2.printStats();

    referee1.printStats();
    referee2.printStats();

    return 0;

}