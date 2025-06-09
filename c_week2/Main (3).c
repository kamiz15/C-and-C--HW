/*CH-230-A
A2p2.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

int main() {
    char inputChar;


    printf("Enter a character: \n");
    scanf("%c", &inputChar);

    printf("character=%c\n", inputChar);
    printf("decimal=%d\n", inputChar);
    printf("octal=%o\n", inputChar);

    return 0;
}