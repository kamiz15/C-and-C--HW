 /*CH-230-A
A8p8.c
Kamila Ziza
kziza@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int wordCount = 0;

    //thsi variable checs for other symbos.
    int extra = 0;
    char ch;

    //the user inputs the name of the file we need to input from
    char file[15];
    fgets(file, 15, stdin);
    file[strcspn(file, "\n")] = 0;
    FILE *words = fopen(file, "r");

   
    // we check if the file was opened correctly
    if ( words== NULL ) {
        printf ("Some error occurred !\n") ;
        exit (1) ;
    }else{
        // this loop contiues until we reach EOF
        while ((ch = fgetc(words)) != EOF){
            //we check for the given characters
            if(ch == ' ' || ch == ',' || ch == '?' 
                || ch == '!' || ch == '.' || ch == '\t'
                || ch == '\r'|| ch == '\n'){     
                    /*if we encounter a char like that this
                     varibale remains 0*/
                    extra = 0;        
            }
            /*in case we do not encounter a character like that the
             word count increases and the extra gets reasigned to a 
             random value different from 0*/
            else if(extra == 0){
                wordCount++;
                extra = 1;
            }
        }
    }
    fclose(words);
    printf("The file contains %d words.\n", wordCount);
    return 0;
}