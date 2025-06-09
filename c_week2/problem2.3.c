/*CH-230-A
A2p3.c
Kamila Ziza
kziza@constructor.university
*/
#include <stdio.h>

int main() {
    int weeks, days, hours, totalHours;

    /* we take input from user for each element*/
    printf("Enter the number of weeks: ");
    scanf("%d", &weeks);

    printf("Enter the number of days: ");
    scanf("%d", &days);

    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    /*calculate the aount of time in hours*/
    totalHours = (weeks * 7 * 24) + (days * 24) + hours;

    // Prin the result 
    printf("Total number of hours: %d\n", totalHours);

    return 0;
}