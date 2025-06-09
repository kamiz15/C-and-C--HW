/*CH-230-A
A7p7.c
Kamila Ziza
kziza@constructor.university
*/

// in this file we include the main function


/*this is used to make the connection between the files*/
#include "stack.h"

int main(){

    //we use this for the value we want to input
	int pushedVal;
    //we use this to choose the action which is preformed
	char determine;

    //we do the dynamic memory allocation
    struct stack* stck = malloc(sizeof(int) * 12);
    if (stck == NULL){
        
        printf("Memory allocation not possible");
        return -1;

    }
    stck->count = 0;

    while(1){
        scanf("%c", &determine);
		determine = tolower(determine);
        switch(determine){
            case 's':{
                scanf("%d", &pushedVal);
                // edge case when the stack if full
                if(stck->count >= 12){
                    printf("Pushing Stack Overflow\n");
                }
                else{
                    //we call the function to preform the action
                    push(stck, pushedVal);
                }
            break;
			}
            case 'p':{
                // case when the stack is empty.
                if(stck->count == 0){
                    printf("Popping Stack Underflow\n");
                }
                else{
                    //we call the function to preform the action
                    printf("Popping %d\n", pop(stck));
                }
            break;
			}
            case 'e':{
                printf("Emptying Stack ");

                //we use a decreasing for loop 
                for(int k = stck->count; k > 0; k--){
                    /*we call the function to preform the action but
                    this time we clear the whole stack by using a 'for'
                     loop to navigate throught each element*/
                    printf("%d ", pop(stck));
                }
                printf("\n");   
            break;
			}
            case 'q':{
                empty(stck);
                printf("Quit\n");
                exit(1); 

            break;
			}
        }
    }
    return 0;
}