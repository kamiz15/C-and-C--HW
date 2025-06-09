/*CH-230-A
A4p8.c
Kamila Ziza
kziza@constructor.university
*/
#include <stdio.h>

/* we make it global to use it everywhere*/
int sides;

void block(int block[sides][sides]){

    for (int r = 0; r < sides; r++){
/* the variable r is used for the rows and c is used
for all the colums in that row*/ 
        for (int c = 0; c < sides; c++){
            printf("%d ", block[r][c]);
        }
/* the new line is used to seperate the blocks*/
        printf("\n");
    }
}


void quadrat_diagonal(int quadrat[sides][sides]){
/*under the second diagonal the sum of the row and colum 
is bigger or equal to the number of sides*/
    for (int r = 1; r < sides; r++){

        for (int c = 1; c < sides; c++){
            if ((r + c) >= sides){
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
/* the variable r is used for the rows and c is used
for all the colums in that row*/
        for (int c = 0; c < sides; c++){
            scanf("%d", &square[r][c]);

        }

    }

/* we call the void function*/
    printf("The entered matrix is:\n");
    block(square);

    printf("Under the secondary diagonal:\n");
    quadrat_diagonal(square);

    return 0;

}
