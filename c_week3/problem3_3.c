/*CH-230-A
A3p3.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
/* we use this function to do the convertion and the division*/
float convert (int cm){
    return cm / 100000.0; 
}

int main()
{
    
    int cm;
/*we take the input from the user and use the function*/    
    scanf("%d",&cm);
    float km = convert(cm);
    
/* we print the result*/   
    printf("Result of conversion: %f\n", km);
    

    
    


    return 0;
}
