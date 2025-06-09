/*CH-230-A
A2p5.c
Kamila Ziza
kziza@constructor.university
*/
#include <stdio.h>
int main() {
    int a;

    /* input integer*/ 
    printf("Enter an integer: ");
    scanf("%d", &a);

    /* print the original value of 'a'*/
    printf("Original value of 'a': %d\n", a);
    printf("Address of 'a': %p\n", (void*)&a);

    /* declare and initialize pointer 'ptr_a'*/
    int* ptr_a = &a;

    /*Increase the value of 'a' by using pointer*/
    *ptr_a += 5;

    /* print the modified value of 'a' and its address */
    printf("Modified value of 'a': %d\n", a);
    printf("Address of 'a': %p\n", (void*)&a);

    return 0;
}
