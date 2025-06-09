/*CH-230-A
A4p11.c
Kamila Ziza
kziza@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/* to count in a insenstivie manner*/
int count_insensitive(char *str, char c){

    int count = 0;
    for(; *str!= '\n'; str++){
        if(*str == toupper(c) || *str == tolower(c)){
            count++;
        }
    }
    return count;
}
int main(){

    char *str1, *str2;
    int n1 = 50, n2;

/*we are allocating the size to 'str1' with a max of 50.*/
    str1 = (char *) malloc(sizeof(char) * n1);

    if (str1 == NULL){

        printf("memory allocation not possible\n");
        exit(1);

    }

    printf("input the string: ");
    fgets(str1, n1, stdin);
/* we do the second string*/  
    n2 = strlen(str1);
    str2 = (char *) malloc(sizeof(char) * n2);

    if (str2 == NULL){

        printf("memory allocation not possible\n");
        exit(1);

    }

/* copy the the first string into the second.*/
    strcpy(str2, str1);
    
/* now we clear the memory of the first string*/
    free(str1);
    printf("\n");
/* we start checking for the given characters*/
    if(count_insensitive(str2,'b') == 1){
    printf("The character 'b' occurs %d time.\n", count_insensitive(str2,'b'));
    }
    else{
        printf("The character 'b' occurs %d times.\n", count_insensitive(str2,'b'));
    }
    if(count_insensitive(str2,'H') == 1){
    printf("The character 'H' occurs %d time.\n", count_insensitive(str2,'H'));
    }
    else{
        printf("The character 'H' occurs %d times.\n", count_insensitive(str2,'H'));
    }
    if(count_insensitive(str2,'8') == 1){
    printf("The character '8' occurs %d time.\n", count_insensitive(str2,'8'));
    }
    else{
        printf("The character '8' occurs %d times.\n", count_insensitive(str2,'8'));
    }
    if(count_insensitive(str2,'u') == 1){
    printf("The character 'u' occurs %d time.\n", count_insensitive(str2,'u'));
    }
    else{
        printf("The character 'u' occurs %d times.\n", count_insensitive(str2,'u'));
    }
    if(count_insensitive(str2,'$') == 1){
    printf("The character '$' occurs %d time.\n", count_insensitive(str2,'$'));
    }
    else{
        printf("The character '$' occurs %d times.\n", count_insensitive(str2,'$'));
    }
    printf("\n");
/* we deallocate 'str2'*/ 
    free(str2);
    return 0;
}


