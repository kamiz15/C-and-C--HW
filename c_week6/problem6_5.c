/*CH-230-A
A6p5.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

/* we use this macro for the decimal representation*/
#define DEC(char) printf("%d", (char))

/* we use this function to print the binary represantation
by using bitwise operators*/  
void convers(unsigned char c){

    
    for(int i = 0; c != 0; i++){

        /* we don't put in arry instead we print directly*/
        printf("%d", (c & 1)); 

        /* we mask movement*/
        c = c >> 1; 

    }

}


int main(){

    /* we initialize and scan the unsigned char*/
    unsigned char c1;
    scanf("%c", &c1);

    /* we print the decimal represantation*/
    printf("The decimal representation is: ");
    DEC(c1);
    printf("\n");

    /* we print the backwards binary*/
    printf("The backwards binary representation is: ");
    convers(c1);
    printf("\n");
 
    return 0;

}
