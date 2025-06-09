/*CH-230-A
A6p2.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

/* we use macro to do the decimal representation*/
#define DEC(char) printf("%d", (char))

/* we use macro for the least significant bit*/
#define LS(char) printf("%d", (char & 1) ? 1 : 0)

int main(){

    /* we initialize and scan the unsigned char*/
    unsigned char c1;
    scanf("%c", &c1);

    /* we print the decimal represantation*/
    printf("The decimal representation is: ");
    DEC(c1);
    printf("\n");

    /* we print the least significant but*/
    printf("The least significant bit is: ");
    LS(c1);
    printf("\n");

    return 0;

}