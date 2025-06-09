/*
CH-230-A
a3 p3.6[c]
Kamila Ziza
k.ziza@jacobs-university.de
*/

#include <stdio.h>

/* we use this function to convert to pound*/
float in_pounds(int kg, int g){

    float lb;

    lb = (kg * 2.2) + (g * 0.0022);

    return(lb);

}


int main(){
    
    int kilo;
    int gram;
    float pound;
    
    scanf("%d",&kilo);
    scanf("%d",&gram);

    /* we use the value from the previous function*/
    pound = in_pounds(kilo, gram);
    printf("Result of conversion: %f\n", pound);

    return(0);

}