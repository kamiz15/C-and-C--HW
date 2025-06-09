/*CH-230-A
A8p6.c
Kamila Ziza
kziza@constructor.university
*/
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main(){

    // we create the varibales with the filename
    char file1[50], file2[50];

    // now we create all the variables for all the calculation
    double first = 0, sec = 0, add = 0, subs = 0, multi = 1, div = 1;

    // we read the file name and remove the /n for the fgets function
    fgets(file1, 50, stdin);
    fgets(file2, 50, stdin);
    file1[strcspn(file1, "\n")] = 0;
    file2[strcspn(file2, "\n")] = 0;

    // we take it forgranted that the file exists, and we open 
    FILE *fileone = fopen(file1, "r");
    FILE *filetwo = fopen(file2, "r");

    // we check if the file was opened correctly
    if ( fileone == NULL || filetwo == NULL ) {
    printf ("Some error occurred !\n") ;
    exit (1) ;


    } else{


        // we trasfer the double
        fscanf(fileone, "%lf", &first);
        fscanf(filetwo, "%lf", &sec);

        fclose(fileone);
        fclose(filetwo);

        // we do the operations
        add = first + sec;
        subs = first - sec;
        multi = first * sec;
        div = (double) first / sec;

        // we create a new file to store the results
        FILE *results = fopen("results.txt", "w");
        
        // we check if the file was opened correctly
        if ( results == NULL) {
            printf (" Some error occurred !\n") ;
            exit (1) ;
    } else {
        //Write in the new file.
            fprintf(results, "The addition is: %lf\n", add);
            fprintf(results, "The subtraction is: %lf\n", subs);
            fprintf(results, "The multiplication is: %lf\n", multi);
            fprintf(results, "The division is: %lf\n", div);

         }
        fclose(results);
        


    }
    return 0;

 }

