/*CH-230-A
A5p1.c
Kamila Ziza
kziza@constructor.university
*/
 
#include <stdio.h>
/* global function on order to be able to call it later*/
void pyramid(int n, char ch){

    int m = n;

    /*loop for all rows*/
    for (int r = 0; r < n; r++){

        /*loop for the number of colums which decreases with each line*/
        for (int c = m; c > 0; c--){
            
            printf("%c", ch);

        }

        printf("\n");
        /* we decrease m by one in each line*/
        m--;

    }

}


int main (){
    
    int n;
    char c; 

    /* the user enterss the input*/
    scanf("%d", &n);
    getchar();
    scanf("%c", &c);
    /* we call the function with the inputed parameteres*/
    pyramid(n, c);

    return 0;

}

