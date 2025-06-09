/*CH-230-A
A4p7.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

/* we make it a global variable to be able to use it later*/
int sides;

void block(int block[sides][sides]){

    for (int r = 0; r < sides; r++){

        for (int c = 0; c < sides; c++){

/* the variable r is used for the rows and c is used
for all the colums in that row*/
            printf("%d ", block[r][c]);

        }
 
/* the new line is used to seperate the blocks*/
        printf("\n");

    }

}


void quadrat_diagonal(int quadrat[sides][sides]){

    for (int r = 0; r < sides; r++){

        for (int c = 0; c < sides; c++){
            
/* for all the square under tthe diagonal the row number
is bigger than the colum*/
            if (r > c){

                printf("%d ", quadrat[r][c]);

            }
            
        }

    }
    
    printf("\n");

}


int main(){

    scanf("%d", &sides);

    int square[sides][sides];

    for (int r = 0; r < sides; r++){

        for (int c = 0; c < sides; c++){
/* the variable r is used for the rows and c is used
for all the colums in that row*/
            scanf("%d", &square[r][c]);

        }

    }

/* we call the void function*/
    printf("The entered matrix is:\n");
    block(square);

    printf("Under the main diagonal:\n");
    quadrat_diagonal(square);

    return 0;

}
