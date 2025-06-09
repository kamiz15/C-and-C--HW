/*CH-230-A
A2p8.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

int main() {
    int number;

    /* input int from user */

    scanf("%d", &number);

    /* check to see if it's divisible by both
    using the AND logical operator*/
    if (number % 2 == 0 && number % 7 == 0) {
        printf("The number is divisible by 2 and 7\n");
    } else {
        printf("The number is NOT divisible by 2 and 7\n");
    }

    return 0;
}