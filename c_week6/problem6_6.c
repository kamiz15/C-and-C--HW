/*CH-230-A
A6p6.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

/* we use this macro for the decimal representation*/
#define DEC(char) printf("%d", (char))

 /* we use this function to print the binary represantation
by using bitwise operators*/ 

void convers(unsigned char c){

    /* in binary 128 is 10000000, which is the bits of an uchar*/
    int size = 128;  
    
    /* this loop continiues until we reach the max value of the uchar*/
    
    for (int i = 0; i < (sizeof(unsigned char) * 8); i++){

        /*we do the representaion directly but firstly we make
        sure the mask movement is done when we have the correct value*/
        printf("%d", !!(c & (size >> i))); 

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

    /* we print the binary representation*/
    printf("The binary representation is: ");
    convers(c1);
    printf("\n");
 
    return 0;

}