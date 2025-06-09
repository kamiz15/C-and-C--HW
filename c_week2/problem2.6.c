
/*CH-230-A
A2p6.c
Kamila Ziza
kziza@constructor.university
*/
#include <stdio.h>

int main() {
    double x, y;

    /* enter double variables */
    printf("Enter the value for x: ");
    scanf("%lf", &x);

    printf("Enter the value for y: ");
    scanf("%lf", &y);

    /*declare and initialize pointers*/
    double *ptr_one = &x;
    double *ptr_two = &x;
    double *ptr_three = &y;

    /* print addresses using printf*/
    printf("ptr_one address: %p\n", (void *)ptr_one);
    printf("ptr_two address: %p\n", (void *)ptr_two);
    printf("ptr_three address: %p\n", (void *)ptr_three);

    return 0;
}
