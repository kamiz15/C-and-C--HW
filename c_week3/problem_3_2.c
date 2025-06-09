/*CH-230-A
A3p2.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>

int main()
{
    char ch;
    int n;
    scanf("%c",&ch);
    scanf("%d",&n);
     for (int i = 0; i <= n; i++) {
        printf("%c", ch - i);
    }


    return 0;
}
