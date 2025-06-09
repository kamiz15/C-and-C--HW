/*CH-230-A
A2pz.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

int main() {
    char chara;

    /* inpus a character */ 
    scanf("%c", &chara);

    /* print it in each version */
    printf("character=%c\n", chara);
    printf("decimal=%d\n", chara);
    printf("octal=%o\n", chara);
    printf("hexadecimal=%x\n", chara);

    return 0;
}
