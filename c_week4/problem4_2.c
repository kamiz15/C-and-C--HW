/*CH-230-A
A4p2.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

int main(){
    char a[50];
    int n=0;
    
 fgets(a, sizeof(a), stdin);

/* the fgets function gets a '\n' in 
the end of the string so ues use the loop
until we reach that position*/
    while(a[n] != '\n'){
        
/* in order to print the output in a zig zag
way we use mod 2 to teel if the position is
even or odd and if it is even we print no 
space and if it is ood we print a space 
before it*/
        if (n % 2){
            printf("%2c\n", a[n]);
        }

        else{ 
            printf("%c\n", a[n]);
        }
/* we keep increasing the value of n*/
        n++;
        
    }
    
    return 0;

}