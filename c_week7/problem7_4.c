/*CH-230-A
A7p4.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <ctype.h>

/*we use this function to convert everything to lowercase*/
void Low(char str1[]){
    // this function is used to go through all the inputed chars
    for (int i = 0; str1[i]; i++){
        // we use the tolower function inside ctype.h library
        printf("%c", tolower(str1[i]));
    }
}

/*we use this function to convert everything to uppercase*/
void Upp(char str2[]){

    // this function is used to go through all the inputed chars
    for (int j = 0; str2[j]; j++){
        // we use the tolower function inside ctype.h library
        printf("%c", toupper(str2[j]));
    }
}

/* we use this function to reverse all letters*/
void Reverse(char str3[]){

    //this function is used to go through all the inputed chars
    for (int k = 0; str3[k]; k++){
        if(islower(str3[k])){
            printf("%c", toupper(str3[k]));
        }
        //we use the tolower and toupper functions inside ctype.h library
        else{
            printf("%c", tolower(str3[k]));
        }
    }
}

int main(){
    char determine;
    char stringAry[200];
    fgets(stringAry, 200, stdin);
    while(1){
        scanf(" %c", &determine);

        /*we end the program if 4 is inputed which in the
         ASCII value table is 52*/
        if(determine == 52){
            break;
        }

        /*we use the ASCII va;ues to have the same value of 
        the char and the int*/
        int value = (int)determine - 48;

        // we use a function pointer to call
        void(*ptr[])(char stringAry[]) = {Upp, Low, Reverse};
        // we use this to go througt all the letters
        (*ptr[value-1])(stringAry);
    }
    return 0;
}