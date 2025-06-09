/*CH-230-A
A8p5.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>


int main(){

    char para [1000];
    int sum = 0;

    // we create a file
    FILE *file1 = fopen("chars.txt", "w");


    // we check if the file was opened correctly
    if ( file1 == NULL ) {
    printf (" Some error occurred !\n") ;
    exit (1) ;
    }

    // now write in texts to be used latter
    fgets(para, 1000, stdin);
    fprintf(file1, "%s", para);
    fclose(file1);

    //now we start to read from the file
    FILE *file2 = fopen("chars.txt", "r");

    // we take the first two characters from the file
    char two[2];
    fscanf(file2, "%2s", two);
    fclose(file2);


    // now we add them together
    for(int i = 0; i < 2; i++){
        sum += two[i];
    }

    // we create the new file to add the characetrs in

    FILE *file3 = fopen("codesum.txt", "w");
  

    // we check if the file was opened correctly
    if ( file3 == NULL ) {
    printf (" Some error occurred !\n") ;
    exit (1) ;
    }

    // we wirite in the file
    fprintf(file3, "the sum of the first two chars is: %d", sum);
    fclose(file3);

    return 0;


}

