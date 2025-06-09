/*CH-230-A
A11p4.c
Kamila Ziza
kziza@constructor.university
*/
#include "Creature.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

// Main function displaying different scenarios.
int main(int argc, char** argv)
{
    string whichObject;
    int size;

    // Infinite loop for user interaction.
    while (1)
    {
        // Prompt the user to choose a scenario.
        cout << "Enter the class on which you want to work on: ";
        getline(cin, whichObject);

        // If "quit" is entered, stop the program.
        if (whichObject == "quit")
        {
            cout << "Program stops!" << endl;
            exit(0);
        }
        else
        {
            if (whichObject == "Wizard")
            {
                // Get size for dynamic memory allocation.
                cout << "Enter the size of the dynamic object array: ";
                cin >> size;

    // Create dynamic object arrays for parent and inherited classes.
                cout << "Creating a Creature.\n";
                Creature *c = new Creature[size];

                cout << "\nCreating a Wizard.\n";
                Wizard *w = new Wizard[size];

                
    // Iterate through the array and access methods of respective classes.
                for (int i = 0; i < size; i++)
                {
                    c[i].run();
                    w[i].run();
                    w[i].hover();
                }

                // Delete the dynamically allocated object arrays.
                delete[] w;
                delete[] c;

                // Clear the input buffer.
                getchar();
            }
            else if (whichObject == "Knight")
            {
                cout << "Enter the size of the dynamic object array: ";
                cin >> size;

                cout << "Creating a Creature.\n";
                Creature *c = new Creature[size];

                cout << "\nCreating a Knight.\n";
                Knight *k = new Knight[size];

                for (int i = 0; i < size; i++)
                {
                    c[i].run();
                    k[i].run();
                    k[i].fight(); 
                }

                delete[] k;
                delete[] c;

                getchar();
            }
            else if (whichObject == "Dragon")
            {
                cout << "Enter the size of the dynamic object array: ";
                cin >> size;

                cout << "Creating a Creature.\n";
                Creature *c = new Creature[size];

                cout << "\nCreating a Dragon.\n";
                Dragon *d = new Dragon[size];

                for (int i = 0; i < size; i++)
                {
                    c[i].run();
                    d[i].run();
                    d[i].fire();
                }

                delete[] d;
                delete[] c;

                getchar();
            }
        }

        cout << endl;
    }

    return 0;
}
