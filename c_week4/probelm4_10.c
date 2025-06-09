/*CH-230-A
A4p10.c
Kamila Ziza
kziza@constructor.university
*/



#include <stdio.h>
#include <math.h>

void proddivpowinv(float a,float b,float *prod,float *div,float *pwr,float *invb){

/* we use pointer to make changes to the variables*/

    *prod = a * b;
/* we take it for granted that b is not 0 */
    *div = a / b;

/* by using the math.h library we get the pow function which 
takes two arguments the first one for the base and the second
for the power*/
    *pwr = pow(a, b);

/* we typecast to float to be more accurate*/
    *invb = (float)1 / b;

}


int main(){

    float a, b, product, division, power, inverse;

    printf("input two floats\n");

    scanf("%f", &a);
    scanf("%f", &b);

    printf("\n");

/* we use the parameter by reference for calling more than one 
values from the void function*/
    proddivpowinv(a, b, &product, &division, &power, &inverse);


    printf("Your input: %f and %f\n", a, b);
    printf("The product: %f\n", product);
    printf("The division: %f\n", division);
    printf("The power: %f\n", power);
    printf("The inverse: %f\n", inverse);

    printf("\n");

    return 0;

}