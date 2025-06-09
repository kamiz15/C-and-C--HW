/*CH-230-A
A7p7.c
Kamila Ziza
kziza@constructor.university
*/

// in this file we include the main function

/*this is used to make the connection between the files*/
#include "stack.h"

/* we remove the unnececary proccesses in the main function*/
int main(){

    unsigned int value;
    struct stack stack;
    
    stack.count = 0;
    
    // we take the user input for the value we wnat to convert
    scanf("%u", &value);
    //we call this function to do that action
    Binary(&stack, value);
    
    return 0 ;
    
}