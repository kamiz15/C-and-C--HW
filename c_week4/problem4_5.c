/*CH-230-A
A4p5.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

int n = 100;

int count_consonants(char str[]){
    
    int consonants = 0;
    char *ptr;

/* pointer to the first element*/
    ptr = &str[0];
    
/* increasing the positions */
    for (; *ptr!='\n'; ptr++){

/*we use the charcter to determine the constants numbers and vowles are skiped*/

        if(*ptr == 'a' || *ptr == 'e' ||  *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
          *ptr == 'A' || *ptr == 'E'|| *ptr == 'I' || *ptr == 'O' || *ptr == 'U'){
              
              continue;

        }

        else if((*ptr > 'a' && *ptr < 'z') || (*ptr > 'A' && *ptr < 'Z')){

            consonants++;
            
        }

    }
        
    return consonants;

}


int main() {
    
    char str[n];
    
    fgets(str, sizeof(str), stdin);
    
/* the fgets function generates a '/n' so incase the user does not enter a value,
the fisrt position[0] will be th '/n' and the program stops*/
    while(str[0]!='\n') { 
        
        printf("Number of consonants=%d", count_consonants(str));
        printf("\n");
        fgets(str, sizeof(str), stdin); 
        
    }

    return 0;

}