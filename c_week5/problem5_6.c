/*CH-230-A
A5p6.c
Kamila Ziza
kziza@constructor.university
*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    float *ptr;

    /*we allocate memory according to the inputed size*/
    scanf("%d", &n);
    ptr = (float *) malloc(sizeof(float) * n);

    /*check is memory allocation is possible*/
    if(ptr == NULL){
        
        printf("memory allocation not possible");
        exit(1);

    }

    /* we add the elements to the array*/
    for(int i = 0; i < n; i++){
        
        scanf("%f", &ptr[i]);
         
    }

    /* we use a pointer to operate inside te array*/
    float *count = ptr;

    for(; count < ptr + n; count++){
        
        /*if there is a negevtive number we stop counting*/ 
        if(*count < 0){

        printf("Before the first negative value: %ld elements\n", count - ptr);

        /* we break it for loop for this value but we keep
        counting after the first negative*/
        break;
        
        }
        
    }
    /* we free the memory*/
    free(ptr);
    
    return 0;

}