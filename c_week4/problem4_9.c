/*CH-230-A
A4p9.c
Kamila Ziza
kziza@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

/* we use global varibales*/
int n;

int prodminmax(int arr[], int n){

/* we create the arrays*/
    int max = arr[0];
    int min = arr[0];

    int prod = 1;

    for (int k = 1; k < n; k++) {

/* if the inputed value is bigger than the maximal max taks that value*/
        if (arr[k] > max){

            max = arr[k];

        }

/* we do the same thing for the smallest value*/
        if (arr[k] < min){

            min = arr[k];

        }
0
    }
/* we write the product of these values*/
    prod = max * min;

    return prod;

}


int main(){

    int *arr;

    printf("size of array: ");
    scanf("%d", &n);

    arr = (int *) malloc(sizeof(int *) * n);

    if (arr == NULL){

        printf("memory allocation not possible\n");
        exit(1);

    }

    printf("input %d elements into the array\n", n);

    for(int k = 0; k < n; k++){

        scanf("%d", &arr[k]);

    }
    
/* variable prod is used to store the product*/
    int prod = prodminmax(arr, n);

    printf("product of smallest and biggest value in array = %d\n", prod);

/*deallocate the memmory*/
    free(arr);

    return 0;

}