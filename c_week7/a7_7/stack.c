/*CH-230-A
A7p7.c
Kamila Ziza
kziza@constructor.university
*/

//in this file we do the function definitions
 
/*this is used to make the connection between the files*/
#include "stack.h"

/*this function is used to push the elements into the stack*/
void push(struct stack* stck, int value){ 
    /*We use this to access the elements and put the new value 
    on the xisting element*/
    stck -> array[stck -> count] = value; 
    printf("Pushing %d\n", value); 
    /* we use this varable to check the size of the stack and it
     increases when we add new elements*/
    stck->count++;
}

/* we use this function to check if the stack is empty or not */
int isEmpty(struct stack* stck) { 

    // if it empty it will result in a negative value
    return (stck -> count == 0); 

} 

/* we use this function to remove a element*/
int pop(struct stack* stck) {

    stck->count--;
    return stck -> array[stck -> count]; 

}

void empty(struct stack* stck){
    if (stck)
        free(stck);
}

void Binary(struct stack *stack, unsigned int value){

    int TOF;
    unsigned int store = value;

    while(value > 0){
        //we convert to binary
        TOF = value % 2;
        // we call the push function to add to the stack
        push(stack, TOF);
        value = value / 2;
    }
    /* since the value of the 'value' varibale changed we
     use 'stored' as a substitution*/
    printf("The binary representation of %u is ", store);
    //Go through the stack in descending order as it is LIFO.
    for (int i = stack -> count - 1; i > -1; i--){
        /*Printing the pushed in value one by one 
        starting from the top and going to the bottom.*/
        printf("%d", stack -> array[i]);
    }

    printf(".\n");
}