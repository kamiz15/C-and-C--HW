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
    
    //To invoke the Default constructor for Tournement member class.
    TournamentMember player, coach, referee;

    //Nine parametric constructors, 3 for each types of tournament members.
    TournamentMember player1("Aa", "Bb", "1980-08-25", 25, 0.27);
    TournamentMember coach1("Ee", "Ff", "1999-06-01", 4, 0.87);
    TournamentMember referee1("Ii", "Jj", "2005-04-24", 0, 0.99);

    //To invoke the Default constructor for Player class.    
    Player sports;
    
    Player player2("Gg", "Hh", "1989-04-21", 21, 0.67, 3, "CM", 281, "Right");
    Player player3("Ii", "Jj", "1990-05-28", 19, 0.90, 1, "GK", 5, "Left");

    //Setting location to all the class objects.
    player.setLocation("Hamburg");

    //Printers for their respective values.

    cout << endl << endl;
    //For the tournement member class:
    //Default
    player.printStats();
    coach.printStats();
    referee.printStats();

    //Parametric
    player1.printStats();
    coach1.printStats();
    referee1.printStats();

    cout << endl << endl;

    //For the player class:
    //Default
    sports.printStats();
    sports.printPlayerStats();

    //Parametric
    player2.printStats();
    player2.printPlayerStats();
    //Increment goal for player2
    player2.goalIncrement();
    player2.printPlayerStats();

    player3.printStats();
    player3.printPlayerStats();
    //Increment goal for player3
    player3.goalIncrement();
    player3.printPlayerStats();
    
    cout << endl << endl;

    return 0;

}