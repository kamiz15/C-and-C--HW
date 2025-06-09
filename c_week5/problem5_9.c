/*CH-230-A
A5p9.c
Kamila Ziza
kziza@constructor.university
*/


#include <stdio.h>
#include <stdlib.h>

/* we use global variables to call in each function*/
int r, c, d;

/* we use this function to add to a 3D array*/
void fillup(int ***shape){
    
    /*rows [mathematical length of the 3D figure]*/
    for(int i = 0; i < r; i++){
        
        /* the colums of each row [mathematicly the height of the 3D figure]*/
        for(int j = 0; j < c; j++){
            
            /* depth[the width of the 3D figure]*/
            for (int k = 0; k < d; k++){
                
                scanf("%d", &shape[i][j][k]);
                
            }
            
        }
        
    }
    
}

/* we use this function to print only @D form the 3D*/
void form3_to_2(int ***box){
    
    /* the output array is the depth of the 3D array*/
    for(int k = 0; k < d; k++){
        
        
        printf("Section %d:\n", k+1);
        /* we go to a new section after each turn*/
        for (int i = 0; i < r; i++){
            
            for(int j = 0; j < c; j++){
                
                printf("%d ", box[i][j][k]);


            }
            
            /* we seperat the rows*/
            printf("\n");
        
        }
        
    }

}


int main(){

    scanf("%d", &r);
    scanf("%d", &c);
    scanf("%d", &d);

    /* we use triple pointers*/
    /* main pointer points to rows which point
    to columns which point to depths*/ 
    int ***cuboid = (int ***) malloc(sizeof(int**) * r);
    
    if(cuboid == NULL){
       
       printf("memory allocation not possible\n");
       exit(1);
       
    }

    for (int i = 0; i < r; i++) {
        
        cuboid[i] = (int **) malloc(sizeof(int *) * c);
        
        if(cuboid[i] == NULL){
            
            printf("memory allocation not possible\n");
            exit(1);
       
        }
        
        for (int j = 0; j < c; j++) {
            
            cuboid[i][j] = (int *) malloc(sizeof(int) * d);

            if(cuboid[i][j] == NULL){
                
                printf("memory allocation not possible\n");
                exit(1);
                
            }

        }

    }

    /*we call the input function to print it in the next function call*/
    fillup(cuboid);
    form3_to_2(cuboid);

    /**in order to free a 3d array we need to free
    the parts in other pointers first than the
    main one*/
    for(int i = 0; i < r; i++){

        for(int j = 0; j < c; j++){

            free(cuboid[i][j]);

        }

        free(cuboid[i]);
    }
    free(cuboid);

    return 0;

}