/*CH-230-A
A8p7.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *text1, *text2, *merge12;

    //we read from existing files.
    text1 = fopen("text1.txt", "r");
    text2 = fopen("text2.txt", "r");

   // we check if the file was opened correctly
    if ( text1 == NULL || text2 == NULL ) {
        printf ("Some error occurred !\n") ;
        exit (1) ;
    }else{
        
        // we create the new file to merge the texts
        merge12 = fopen("merge12.txt", "w");

        // we check if the file was opened correctly
    if ( text1 == NULL || text2 == NULL ) {
        printf ("Some error occurred !\n") ;
        exit (1) ;
    }else{
            
            // we use a pointer to point to the specific line 
            char *line = NULL;
	        size_t lengL = 0;
	        ssize_t readL;

            // this loop contiues until we reach EOF
            while ((readL = getline(&line, &lengL, text1)) != -1){
                    //now we copy this into our new file
                    fprintf(merge12, "%s", line);
            }
            // now we are done iwth this file we close it
            fclose(text1);

            /* we we this end of line to seperate the 
            file inside the merge file*/
            fprintf(merge12, "\n");

            // we do the same for the second file
            while ((readL = getline(&line, &lengL, text2)) != -1){
                    fprintf(merge12, "%s", line);
            }
            // now we close both files
            fclose(text2);
            fclose(merge12);
        }
    }
    return 0;
}