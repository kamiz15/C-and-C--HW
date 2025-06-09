/*CH-230-A
A2p9.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

int main() {
    char a;
/* we take input from user*/

    scanf("%c", &a);
/* we use a if loop to sort the input according to the ASCII table*/
    if ((a >= '0' && a <= '9')) {
        printf("%c is a digit\n",a);
    } 
    else if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) {
        printf("%c is a letter\n",a);
    } 
    else {
        printf("%c is some other symbol\n",a);
    }

    return 0;
}   


   
