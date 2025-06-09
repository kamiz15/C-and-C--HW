/*CH-230-A
A5p3.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

int count_lower(char* str){

    int lowcount = 0;
    
    //changing the addres after each turn
    for (; *str!='\n'; str++){

        /*we use the charcters and compare tham 
        to the ASCII table to see if they are lowercase*/
        if((*str >= 'a' && *str <= 'z')){
              
            lowcount++;

        }

    }
        
    return lowcount;

}


int main(){
    
    char words[50];
    /* we use the fgets function since it always generates a \n at
    the end even if the input from the user is 0*/ 
    fgets(words, 50, stdin);
    
    
    while(words[0]!='\n') { 
        /*we call the function inside printf*/
        printf("the number of lowercase letters is %d", count_lower(words));
        printf("\n");
        fgets(words, 50, stdin); 
        
    }

    return 0;

}

