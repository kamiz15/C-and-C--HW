/*CH-230-A
A5p4.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>

/* global function on order to be able to call it later*/
void divby5(float arr[], int size){

    /*we divide all elements in the array by 5*/
    for (int i = 0; i < size; i++){

        /*we type cast to float to be more accurate*/
        arr[i] = (float) arr[i]/5;

    }


}


int main(){

    int s; 
    float *given_array;
    /* we ase the user for the inpur size*/
    printf("input size of array: ");
    scanf("%d", &s);

    /*we allocate the memory*/
    given_array= (float *) malloc(sizeof(float *) * s);

    /* we chaech if memory allocation is possible*/
    if (given_array == NULL){

        printf("memory allocation not possible\n");
        exit(1);

    }

    /* now we start adding the elements to the array*/
    printf("input %d elements into the array\n", s);

    for(int k = 0; k < s; k++){

        scanf("%f", &given_array[k]);

    }

    printf("\n");

    /*we print the original*/
    printf("original:\n");

    for (int o = 0; o < s; o++){
        
        printf("%.3f ",given_array[o]);

    }

    printf("\n");

    /* printing the new array*/
    printf("after division:\n");

    /* we call the void function*/
    divby5(given_array, s);
    
    for (int k = 0; k < s; k++){

        printf("%.3f ", given_array[k]);

    }

    printf("\n");
    printf("\n");

    // we free the memory
    free(given_array);
    
    return 0;

}