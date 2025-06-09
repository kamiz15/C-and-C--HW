/*CH-230-A
A2p4.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

int main() {
    float a,b,h;

    /* input int from user */

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);
    /*calculate the area of the figures */
    float sq = a*a;
    float rec = a*b;
    float tri = a*h/2;
    float trap = (a+b)*h/2;
    /* print the values of the areas */
    printf("square area=%f\n",sq);
    printf("rectangle area=%f\n",rec);
    printf("triangle area=%f\n",tri);
    printf("trapezoid area=%f\n",trap);

    return 0;
}