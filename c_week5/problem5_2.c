/*CH-230-A
A5p2.c
Kamila Ziza
kziza@constructor.university
*/
 
#include <stdio.h>

/* global function on order to be able to call it later*/
void divby5(float arr[], int size){

    /*we divide all elements in the array by 5*/
    for (int i = 0; i < size; i++){

        /*we type cast to float to be more accurate*/
        arr[i] = (float) arr[i]/5;

    }


}


int main (){
    
    float given_array[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    /*printin the given array*/ 
    printf("Before:\n");

    for (int k = 0; k < 6; k++){
        
        printf("%.3f ", given_array[k]);

    }

    printf("\n");

    /*printing the array after divisiion*/
    printf("After:\n");

    /* we call the void function*/
    divby5(given_array, 6);
    
    for (int z = 0; z < 6; z++){

        printf("%.3f ", given_array[z]);

    }

    printf("\n");
    
    return 0;

}



