#include <stdio.h>

int main() {
    char c = 'F';
    char thirdChar;
    int thirdCharASCII;

    thirdChar = c + 3;


    thirdCharASCII = c + 3;

    
    printf("Third character after 'F' is: %c\n", thirdChar);
    printf("It's ASCII code is : %d\n", thirdCharASCII);

    return 0;
}
