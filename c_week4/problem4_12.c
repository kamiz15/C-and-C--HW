/*CH-230-A
A4p12.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <string.h>
/* we use this function now to be able to call it later*/
/* we use pointers to make changes to the strings*/
void replaceAll(char *str, char c, char e){
    for(; *str!= '\0'; str++){
        if(*str == c){
            *str = e;
        }
    }
}
int main (){
    char being_changed[80], saved[80], c, e, dets[8];
/* prints a for the first time */
    dets[0] = 'a'; dets[1] = 0; dets[2] = 0; dets[3] = 0;
    dets[4] = 0; dets[5] = 0; dets[6] = 0; dets[7] = '\0';
    while(1){
        printf("\n");
        printf("input %s the string that will be changed: ", dets);
        fgets(being_changed, 80, stdin);
/* prints 'another' for all the other times*/
        dets[1] = 'n'; dets[2] = 'o'; dets[3] = 't'; dets[4] = 'h';
        dets[5] = 'e'; dets[6] = 'r'; dets[7] = '\0'; 
/* we copy the string now because it will be changed later*/
        strcpy(saved, being_changed);
/* stops the progrman is stop is entered, using each letter*/
        if(being_changed[0] =='s' && being_changed[1] =='t' && being_changed[2] =='o'
           && being_changed[3] =='p' && being_changed[4] =='\n'){
            break;
        }
/* removing the '/n' at the end of the fgets */
        being_changed[strcspn(being_changed, "\n")] = 0;
        saved[strcspn(saved, "\n")] = 0;
        printf("input the character that you want to replace: ");
        scanf("%c", &c);
        getchar();
        printf("input the new character: ");
        scanf("%c", &e);
        getchar();
        printf("\n");
/* by using the function in the begining to call the new string */
        replaceAll(being_changed, c, e);
/* printing the original string*/
        printf("The original string: \"%s\" the replacing characters: '%c' to '%c'.\n", saved, c, e);
/* printing the changed string*/
        printf("Changed string: \"%s\".\n", being_changed);
    }
    return 0;
}




