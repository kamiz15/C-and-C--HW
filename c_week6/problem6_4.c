/*CH-230-A
A6p4.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>
/* we use INTERMEDIATE as a macro*/
#define INTERMEDIATE

int main (){

    int *IVec, *IIVec, *IProd;
    int size, SProd = 0; 
    
    /* firstl we take the user inpur of the size of the vectors*/
    scanf ("%d", &size);

    /* we do the dynamic memory allocation of each vector*/
    IVec = (int *) malloc(sizeof(int) * size);
        
    if (IVec == NULL){
        
        printf("memory allocation not possible");
        exit(1);

    }

    IIVec = (int *) malloc(sizeof(int) * size);
        
    if (IIVec == NULL){
        
        printf("memory allocation not possible");
        exit(1);

    }

    IProd = (int *) malloc(sizeof(int) * size);
        
    if (IProd == NULL){
        
        printf("memory allocation not possible");
        exit(1);

    }

    /* we do the input for the first vector*/
    for (int i = 0; i < size; i++){

        scanf("%d", &IVec[i]); 

    }

    /* we do the input for the second vector*/
    for (int i = 0; i < size; i++){

        scanf("%d", &IIVec[i]); 

    }
    

    int idx = 0;

    while (idx < size){

        /*we calculate the intermediate value and dot
        probuct by using the given formulas*/
        
        /* intermediate product*/
        IProd[idx] = IVec[idx] * IIVec[idx]; 
        /* scalar product*/
        SProd = SProd + IProd[idx];

        idx++;

    }

    /* we print the INTERMEDIATE value only if its defined*/
    
    #ifdef INTERMEDIATE 
    printf ("The intermediate product values are:\n");

    for (int i = 0; i < size; i++){

        printf ("%d\n", IProd[i]); 

    }

    /* in case it is not defined we print only the dot product*/
    #else
    printf("INTERMEDIATE not defined\n");

    #endif
    printf ("The scalar product is: %d\n", SProd);

    return 0;

}