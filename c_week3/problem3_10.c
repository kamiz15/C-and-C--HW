/*
CH-230-A
a3 p3.10[c]
Kamila Ziza
k.ziza@jacobs-university.de
*/
#include <stdio.h>

/* function to retur the product*/
float product(float a, float b){

    float product = a * b;

    return product;

}
/* function to return the product by reference*/

void productbyref(float a, float b, float *p){

    *p = a * b;
    return;

}

/* function to add 3 to the first and 11 to the second*/
void modifybyref(float *a, float *b){

    *a += 3;
    *b += 11;
    return;

}

/* now we start to prove that the fist and second 
function have the same effect*/
int main (){

    float f1, f2, r1, r2;
    
    printf("input first float: ");
    scanf("%f", &f1);

    printf("input  second float: ");
    scanf("%f", &f2);

    /*we compare the results from the first two functions*/
    
    r1 = product(f1, f2);
    productbyref(f1, f2, &r2);
    modifybyref(&f1, &f2); 

    printf("Result from first: %f\n", r1);
    printf("Result from second: %f\n", r2);
/* both r1 and r2 return 0the same value, but one uses 
prameters by value and the second uses parameters by 
refererce since it can not return actual value*/
 

    printf("Result from the third: %f and %f\n", f1, f2);

    /*modifybyref function makes changes or modifies the
    parameter by using the reference and a pionter to return 
    to the main function.*?*/

    return 0;

}
