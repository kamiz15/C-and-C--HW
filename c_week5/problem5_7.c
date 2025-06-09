/*CH-230-A
A5p7.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char s_1[100], s_2[100], *strmain; 
    int leng;

    /* we take the string input from the user*/
    fgets(s_1, 100, stdin); 
    fgets(s_2, 100, stdin); 

    /* we need to remove the \n at the end of the fgets functions*/
    s_1[strcspn(s_1, "\n")] = 0;
    s_2[strcspn(s_2, "\n")] = 0;

    /* we join both strings*/
    strcat(s_1, s_2); 
    
    /*we get the length of the new string to use it later
    as the size of the array*/
    leng = sizeof(s_1);

    /* we do the dynamic memory allocation*/
    strmain = (char *) malloc(sizeof(char) * leng); 

    /* we check if memory allocation was possible*/
    if (strmain == NULL){ 

        printf("memory allocation not possible\n");
        exit(1);

    }

    /* we use the copy function of string.h*/
    strcpy(strmain, s_1);
    printf ("Result of concatenation: %s\n", strmain); 

    /* we free the memory*/
    free(strmain);

    return 0;

}