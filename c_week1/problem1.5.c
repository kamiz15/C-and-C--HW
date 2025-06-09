#include <stdio.h>

int main() {
    int x = 2138;
    float y = -52.358925;
    char z = 'G';
    double u = 61.295339687;

    /*Print the value of x with 9 places */ 
    printf("x= %8d\n", x);

    /* Print the value of y with 11 places and a precision of 5*/
    printf("y=%11.5f\n", y);

    /* Print the character z */
    printf("z=%c\n", z);

    /* Print the value of u with a precision of 7 */
    printf("u=%.7lf\n", u);

    return 0;
}
