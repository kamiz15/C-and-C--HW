/*CH-230-A
A2p10.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

int main() {
    int n;

    /*Keep prompting the user until a valid value is inputed*/
    while (n <= 0) {
        printf("Enter a positive non-zero integer (n): ");
        scanf("%d", &n);
    } 

    /* print conversion table */
    int i = 1;
    while (i <= n) {
        printf("%d day(s) = %d hours\n", i, i * 24);
        i++;
    }

    return 0;
}
