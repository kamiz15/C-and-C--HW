/*CH-230-A
A7p5.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>

/*we use  function pointer to do the comparison*/
int ascend(const void *one, const void *two){

    // we typecast the voids to int
    const int *el1 = one;
    const int *el2 = two;

    /*the negative results are pushed back to do the ascending sort*/
    return *el1 - *el2;

}


/*we use  function pointer to do the comparison*/
int descend(const void *one, const void *two){

    // we typecast the voids to int
    const int *el1 = one;
    const int *el2 = two;

    /*the positive results are pushed to the front to do the decending sort*/
    return *el2 - *el1;

}

int main (){

    int sizeofA;
    char activity;
    int *randA;

    scanf("%d", &sizeofA);

    /* we do the dynamic memory allocation*/
    randA = (int *) malloc(sizeof(int) * sizeofA);

    if (randA == NULL){
        printf("memory allocation not possible\n");
        exit(1);
    }

    // the use inputs the values                                  
    for (int i = 0; i < sizeofA; i++){
        scanf("%d", &randA[i]);
    }
        
    while(1){
        scanf("%c", &activity);
        /* we use a switch to navigate according to each case*/
        switch(activity){

            case('a'):{

                /* we use qsort to sort accoringly*/
                qsort(randA, sizeofA, sizeof(int), ascend);
                // we print the array
                for(int i = 0 ; i < sizeofA; i++){  
                   printf("%d ", randA[i]);
                }
                printf("\n");
                break;
            }

            case('d'):{
            
                /* we use qsort to sort accoringly*/
                qsort(randA, sizeofA, sizeof(int), descend);

                // we print the array 
                for(int i = 0 ; i < sizeofA; i++){  
                   printf("%d ", randA[i]);
                }
                printf("\n");
                break;  
            }

            // in this case we exit the execution     
            case('e'):{
                return 0;
                break;   
            }   
        }
    }
    return 0; 
}