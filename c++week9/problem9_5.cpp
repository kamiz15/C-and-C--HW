/*CH-230-A
A9p5.c
Kamila Ziza
kziza@constructor.university
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    string name;
    getline(cin, name);
    // guessing the number
    int random, limits, guess, count = 0;
    random = rand();
    limits = (random % 100) + 1;

    srand(static_cast<unsigned int>(time(0)));

     cout << endl << limits << endl << '\n';
    

    while(1){
        //we count every loop
        count++;
        cout << "Enter your guess: ";
        cin >> guess;

        if(guess < limits){
            cout << "Too Low!" << endl;
        }
    
        else if(guess > limits){
            cout << "Too High!" << endl;
        }
        else{
            
            cout << endl << "Wow " << name << ", you are amazing !" << endl 
                 << "It took you " << count << " attempt(s)." << endl;
            break;
        }
    }
    return 0;
}