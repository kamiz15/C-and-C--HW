/*CH-230-A
A4p6.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>

/* we make it a global value because it is used everywhere*/
int n;

void two_greats(int int_array[], int *bigger, int *big){

/* we assign the first elements of the array*/
    *bigger = int_array[0];
    *big = int_array[1];

/* we use this if the array size is two */
    if (bigger < big){

        int temp = *bigger;
        *bigger = *big;
        *big = temp;

    }

    for (int i = 2; i < n; i++) {

/* if the next elemt is bigger than the previous
'bigger' than the preivous one is assigned to 'big'
and the new one to 'bigger'*/
        if (int_array[i] > *bigger){

            *big = *bigger;
            *bigger = int_array[i];            

        }
/* if a value in between big and huge is entered to remove any gaps
between them we assing it to 'big'*/

        else if (int_array[i] > *big && int_array[i] != *bigger){


            *big = int_array[i];

        }

    }

}

int main(){

    int gigant,enourmous ;
    int *array_int;

    printf("size of array: ");
    scanf("%d", &n);

/* you can not generate two numbers out of one number,
ask user to input more values*/
    while (n < 2){

        printf("enter more values to make the comparison valid: ");
        scanf("%d", &n);

    }

/* we allocate the dynamic memory*/
    array_int = (int *) malloc(sizeof(int) * n);

/* if the memory was not allocated*/
    if (array_int == NULL){

        printf("memory allocation not possible\n");
        exit(1);

    }

    printf("input %d elements into the array\n", n);

    for(int i = 0; i < n; i++){

        scanf("%d", &array_int[i]);

    }

/* we call the void function*/
    two_greats(array_int, &gigant, &enourmous);

    printf("The biggest number is = %d and the second biggest is  %d\n", gigant, enourmous);
/* now we dealocate the memory*/
    free(array_int);

    return 0;

}