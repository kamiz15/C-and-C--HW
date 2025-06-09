/*CH-230-A
A3p1.c
Kamila Ziza
kziza@constructor.university
*/
/*CH-230-A
A3p1.c
Kamila Ziza
kziza@constructor.university
*/
#include <stdio.h>

int main() {
    /* declare the variables*/
    float x;
    int n;
    /* get the values from the user */
    scanf("%f",&x);
    scanf("%d",&n);
    /* create a while loop to check if 
    it is a positive integer*/
    while(n<=0){
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }

          /* create loop to print x n-times*/
            for (int i = 0; i < n; i++) {
                printf("%f\n",x);
        }


    return 0;   
}