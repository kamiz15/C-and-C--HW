/*CH-230-A
A2p1.c
Kamila Ziza
kziza@constructor.university
*/
#include <stdio.h>

int main() {
// firstly we declare the variables
    double dub1, dub2;
    int num1, num2;
    char char1, char2;
//we take the input from the user
    scanf("%lf", &dub1);
    scanf("%lf", &dub2);
// we directly print the sum difference and square of the doubles inside the printf function
    printf("sum of doubles=%.6lf\n", dub1 + dub2);

    printf("difference of doubles=%.6lf\n", dub1 - dub2);

    printf("square=%.6lf\n", dub1 * dub1);
// we input the intigers  
    scanf("%d", &num1);
    scanf("%d", &num2);
// preform the mathematical calculations using the inputed ints
    int sumInt = num1 + num2;
    int productInt = num1 * num2;
// we print the results
    printf("sum of integers=%d\n", sumInt);
    printf("product of integers=%d\n", productInt);
// we ask for the characters input from the user and we assign number values to them 
    scanf(" %c", &char1); 
    scanf(" %c", &char2);
// we preform the calculations on the numerical values of the characters
    int sumChars = char1 + char2;
    int productChars = char1 * char2;
// we print the mathematical results and than the char equals 
    printf("sum of chars=%d\n", sumChars);
    printf("product of chars=%d\n", productChars);
    printf("sum of chars=%c\n", (char)sumChars);
    printf("product of chars=%c\n", (char)productChars);

    return 0;
}
