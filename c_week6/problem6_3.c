/*CH-230-A
A6p3.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

/* the parameters in the following macros are the inputed variables*/


/* we compare all inputs individualy and determine the minimun*/
#define compMIN(a, b) ((a) < (b)  ? (a) : (b))
#define MINI(a, b, c) compMIN(compMIN(a,b),c)

/* we compare all inputs individualy and determine the minimun*/
#define compMAX(a, b) ((a) > (b)  ? (a) : (b))
#define MAXI(a, b, c) compMAX(compMAX(a,b),c)

/* for this part the parameters are the outputs of the macros*/

/* we use this acro to find the output of the following math expression*/
#define Range(MIN, MAX) ((MIN + MAX)/ (float) 2)

int main(){

    int a, b, c;

    /* get input from user*/
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    /* we start calling all the macros one by one*/
    int min = MINI(a, b, c);
    int max = MAXI(a, b, c);
    float middlerange = Range(min, max);

    /* we print the output*/
    printf("The mid-range is: %f", middlerange);
    printf("\n");

    return 0;

}