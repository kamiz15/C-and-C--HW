/*CH-230-A
A4p4.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

int count_consonants(char str[]){
    
    int idx, consonants = 0;
/*by using the ascii values we can determine if the it is a constant
or a vowel, and we skip if it is a vowel*/   
    for (idx = 0; str[idx] != '\0'; idx++){
        
        if ((str[idx] == 97|| str[idx] == 101|| str[idx] == 105|| str[idx] == 111|| str[idx] == 117
           ||str[idx] == 65|| str[idx] == 69|| str[idx] == 73|| str[idx] == 79|| str[idx] == 85 )){

            continue;

        }

        else if((str[idx] >= 97 && str[idx] <= 122) || (str[idx] >= 65 && str[idx] <= 90 )){

            consonants++;
            
        }

    }
        
    return consonants;

}


int main() {
    
    char str[100];
    
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

    
   