/*CH-230-A
A6p7.c
Kamila Ziza
kziza@constructor.university
*/
#include<stdio.h>

/* we use macro for decimal represantaion*/
#define DEC(char) printf("%d", (char))

/* we use 128 as in binary it is 10000000, the bits in a uchar*/
int size = 128;

/* we use this function to print the binary represantation
by using bitwise operators*/
void convers(unsigned char c){
    /* we go until the size of c*/
    for(int i = 0; i<(sizeof(unsigned char)*8); i++){
        printf("%d",!!(c & (size >> i)));
    }
}

unsigned char set3bits(unsigned char k, int x, int y, int z){
    /* we turn them into bits if they aren't already and we 
    use a new char to store them*/
    k = k | (1 << x) | (1 << y) | (1 << z);
    
    return k;
    
}

int main(){
    
     /* we initialize and scan the unsigned char*/
     unsigned char c;
     int b1, b2, b3;
     scanf("%c", &c);
     scanf("%d", &b1);
     scanf("%d", &b2);
     scanf("%d", &b3);
     
     /* we print the decimal represantation*/
     printf("The decimal representation is: ");
     DEC(c);
     printf("\n");
     
     /* we print the binary represantation*/
     printf("The binary representation is: ");
     convers(c);
     printf("\n");
     
     printf("After setting the bits: ");
     /* we call the function to update the char bits*/
     c = set3bits(c, b1, b2, b3);
     
     /* we keep this loop until we reach the binary size of c*/
     for (int i = 0; i < (sizeof(unsigned char) * 8); i++){
         printf("%d", !!(c & (size >> i)));
         
     }
     printf("\n");
     return 0;
 
}

