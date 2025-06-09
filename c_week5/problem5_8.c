/*CH-230-A
A5p8.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>



/* we use global variables to call in each function.
m is column for mat1 and row for mat2 so is 
compatible for matrix multiplication.*/

int n, m ,p;

/* we use this function to create matrix one*/
void m_1(int **m_1){
    
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < m; j++){
            
            scanf("%d", &m_1[i][j]);
            
        }

    }

}

/* we use this function to create matrix two*/
void m_2(int **m_2){
    
    for(int i = 0; i < m; i++){
        
        for(int j = 0; j < p; j++){
            
            scanf("%d", &m_2[i][j]);
            
        }
        
    }

}


/* we use this function to multiply the matrixes*/
void multiplication(int **m_1, int **m_2, int **final_m){
    
    /* the final_m matrix has to be null*/
    for(int i = 0; i < n; i++){
                            
        for(int j = 0; j < p; j++){
                                
            final_m[i][j] = 0;
                                
        }
                            
    }
                        
    /* we start multiplying and sorting the matrixes now*/

    /*the two initial 'for' loops are for the rows and colums of 
    the final_m matrix.*/
    
    /*the last loop is to make sure the multiplication is done in 
    a correct manner*/
    for(int i = 0; i < n; i++){
                            
        for(int j = 0; j < p; j++){
                                
            for(int k = 0; k < m; ++k){
                                    
                final_m[i][j] += m_1[i][k] * m_2[k][j];
                                    
            }

        }

    }

}


/* we use a diaplay function to print all matrixes*/
void display(int **m_1, int **m_2, int **final_m){
    
    printf("Matrix A:\n");
                
    for (int i = 0; i < n; i++){
                    
        for (int j = 0; j < m; j++){
                        
            printf("%d  ", m_1[i][j]);
                            
        }

        /* to seperate the rows*/
        printf("\n");
                    
    }

    printf("Matrix B:\n");
                
    for (int i = 0; i < m; i++){
                    
        for (int j = 0; j < p; j++){
                        
            printf("%d  ", m_2[i][j]);
                                      
        }

        printf("\n");
                    
    }

    printf("The multiplication result AxB:\n");
                
    for (int i = 0; i < n; i++){
                    
        for (int j = 0; j < p; j++){
                        
            printf("%d  ", final_m[i][j]);
                            
        }

        printf("\n");
                    
    }

}


int main(){
    
    /* the rows of the first matrix*/
    scanf("%d", &n); 

    /* the row for matrix 2 and colum for matrix 1*/
    scanf("%d", &m); 

    /* the colum for matrix 2*/
    scanf("%d", &p);
    
    /*we use double pointers to rpoint at rows and colums seperately*/
    int **mat_1= (int **) malloc(sizeof(int *) * n);
    
    /*we start checking if memory allocation was possible*/
    if(mat_1 == NULL){
       
       printf("memory allocation not possible\n");
       exit(1);
       
    }

    /* we point to the colums from each row*/
	for(int i = 0; i < n; i++){

		mat_1[i] = (int *) malloc(sizeof(int) * m);
        
        /* we start checking if memory allocation was possible*/
        if(mat_1[i] == NULL){
            
            printf("memory allocation not possible\n");
            exit(1);
            
        }

    }

    /* we do the same thing as above*/
    int **mat_2= (int **) malloc(sizeof(int *) * m);
    
    if(mat_2 == NULL){
       
       printf("memory allocation not possible\n");
       exit(1);
       
    }

	for(int i = 0; i < m; i++){

		mat_2[i] = (int *) malloc(sizeof(int) * p);
        
        if(mat_2[i] == NULL){
            
            printf("memory allocation not possible\n");
            exit(1);
            
        }

    }

    /* we do the same thing as above*/

    /* the multiplied matrix has the size of
    row of matrix 1 and column of matrix 2.*/
    int **final_m= (int **) malloc(sizeof(int *) * n);
    
    if(final_m == NULL){
       
       printf("memory allocation not possible\n");
       exit(1);
       
    }

	for(int i = 0; i < n; i++){

		final_m[i] = (int *) malloc(sizeof(int) * p);
        
        if(final_m[i] == NULL){
            
            printf("memory allocation not possible\n");
            exit(1);
            
        }

    }
    
    /* print the first matrix*/
    m_1(mat_1);

    /* print the second matrix*/
    m_2(mat_2);

    /* we call the function to multiply the matrixes*/
    multiplication(mat_1, mat_2, final_m);

    /* we display all three matrixes*/
    display(mat_1, mat_2, final_m);
    
    /*in order to free a 2d array we need to free
    the parts in the second pointer first than the
    main one*/
    for(int i = 0; i < n; i++){
        free(mat_1[i]);
    }
    free(mat_1);
 
    for(int i = 0; i < m; i++){
        free(mat_2[i]);
    }
    free(mat_2);
    for(int i = 0; i < n; i++){
       free(final_m[i]);
    }
    free(final_m);
   return 0;

}