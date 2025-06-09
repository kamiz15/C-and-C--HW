/*CH-230-A
A9p9.c
Kamila Ziza
kziza@constructor.university
*/
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

/*Using function as the there needs 
to be function call within the function.*/
void guessgame(){

    int random, limits, count = 0, size;
    string words[17] = {"computer", "television", "keyboard", 
                        "laptop", "mouse", "kami", 
                        "wind", "spoon", "vanilla", 
                        "red", "tangarine", "cook",
                        "scarf", "south", "blue",
                        "tears", "love"};
    string guess;
    string again;
    //we pick a random number between 0 and 16.
    srand(static_cast<unsigned int>(time(0)));
    random = rand();
    limits = (random % 16);
    //we get the word at that index form the array.
    string original = words[limits];
    size = original.size();
    //Make a copy of the chosen word because it will be changed later.
    string guessWord = original;
    //Convert vowels to underscores, both upper and lower score.
    for(int i = 0; i < size; i++){
        if(guessWord.at(i) == 'a' || guessWord.at(i) == 'e' || 
           guessWord.at(i) == 'i' || guessWord.at(i) == 'o' || 
           guessWord.at(i) == 'u' || guessWord.at(i) == 'A' || 
           guessWord.at(i) == 'E' || guessWord.at(i) == 'I' ||
           guessWord.at(i) == 'O' || guessWord.at(i) == 'U')  {
            guessWord.at(i) = '_';
        }
    }
    cout << endl << "          **** Guess The Word ****";
    cout << endl << "Enter \"quit\" whenever you want to stop" << endl << endl;
    // we display the word with the underscores.
    cout << "Here's a hint: " << guessWord << endl << endl;
    //Infinite loop until quit is entered.
    cout << "Enter your guess: ";
    while(1){
        //we count every loop.
        count++;
        cin >> guess;
        //to quit.
        if(guess == "quit"){
            cout << "!bye!" << endl;
            exit(0);
        }
        else{
            //when the guess matches the word.
            if(guess == original){
                cout << endl << "You guessed correctly!";
                cout << endl << "It took you: " << count << " attempt(s)!"<< endl << endl;
                cout << "Do you wish to continue playing ?" << endl;
                cout << "Enter \"quit\" to quit or type anything else to continue: ";
                //Ito quit midgame.
                cin >> again;
                if(again == "quit"){
                    cout << "!bye!" << endl;
                    exit(0);
                }
                //we call the function inside the function 
                else{
                    guessgame();
                }
            }
            else{
                //we keep trying to guess.
                cout << "Wrong guess!" << endl << endl;
                cout << "Enter your new guess: ";
            }
        }
    }
}

//in the main function we just call the function
int main(){
    guessgame();
    return 0;
}