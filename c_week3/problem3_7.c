/*
CH-230-A
a3 p3.7[c]
Kamila Ziza
k.ziza@jacobs-university.de
*/

#include <stdio.h>

/* prototype of function*/

void printform(int n, int m, char c){
/* we use this function to create the connnection 
between the letter for the trapezum*/
    for (int height = 1 ; height <= n ; height++){
/* function to establish the smallerbase*/
        for(int base = 1 ; base <= m ; base++){

            printf("%c",c);

        }

        printf("\n");
        
        /* we increase the value of m because 
        every linehas one more char*/
        m++; 

    }

}


int main(){

    int h, b;
    char c;

    /*input  height for the trapezoid*/
    scanf("%d", &h);

    /*input the base for the traopezoid*/
    scanf("%d", &b);

    getchar();

    /*input any character to be shaped*/
    scanf("%c", &c);

    /* now we can call the void function*/
    printform(h, b, c);

    return 0;
 
}