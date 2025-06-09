 /*CH-230-A
A8p9.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// we use this function to merge the files
void Merge(FILE *fileCreator, char *file){
    
    //variables required for fread and fwrite
    char lineBuff[64];
    //we leave the buffer as null
    memset(lineBuff, '\0', sizeof(lineBuff));
    int LLeng;
    FILE *fileOp = fopen(file, "r");
    // we check if the file was opened correctly
    if ( fileOp== NULL ) {
        printf ("Some error occurred !\n") ;
        exit (1) ;
    }else{
        //OL = Long offset, SEEK_ = whence.
        //Front -> End loop all the while finding the size in each iteration.
        fseek(fileOp , 0L , SEEK_END);
        LLeng = ftell(fileOp);
        fseek(fileOp, 0L , SEEK_SET);
        // this loop contiues until we reach EOF
        while(fread(lineBuff, 1, LLeng, fileOp) && LLeng > 0){
            /*with this loop we copy only the real charcters in the line
             not the white spaces even if they are less than 128*/
            if(LLeng < 64){
                for(int i = 0; i < LLeng; i++){
                    printf("%c", lineBuff[i]);
                }
                printf("\n");
                fwrite(lineBuff, LLeng, 1, fileCreator);
                // we reset to 0 for next line
                LLeng = 0;
            }
            /*in case the file has more characters we 
            hold only 128 and continue*/
            else{
                for(int i = 0; i < LLeng; i++){

                    printf("%c", lineBuff[i]);
                }
                printf("\n");
                // we write to the file
                fwrite(lineBuff, 64, 1, fileCreator);
                LLeng = LLeng - 64;
            }
        }
        // we seperate each file with a new line
        fputc('\n', fileCreator);
        fclose(fileOp);
    }  
}
int main(){

    char file[100];
    int howMany;
    scanf("%d", &howMany);
    FILE *fileCreator = fopen("output.txt", "w");
    // we check if the file was opened correctly
    if ( fileCreator== NULL ) {
        printf ("Some error occurred !\n") ;
        exit (1) ;
    }
    //Compilation crashes without this.
    //Enter after entering howMany causes error.
    getchar();
    printf("Concating the content of %d files ...\n", howMany);
    printf("The result is:\n");
        //Open only the specified number of files.
        for(int i = 0; i < howMany; i++){

            fgets(file, 100, stdin);
            file[strcspn(file, "\n")] = 0;

            //Function call to display and do its work.
            Merge(fileCreator, file);
        }
        fclose(fileCreator);
        printf("The result was written into output.txt\n");
    return 0;
}