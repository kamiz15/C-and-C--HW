/*
CH-230-A
a4 p4.1[c]
Kamila Ziza
k.ziza@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main(){
/* we create the varibles and take the input from the user */
    float start, stop, step;

    scanf("%f", &start);
    scanf("%f", &stop);
    scanf("%f", &step);

/* we use the for loop to take care of all possible cases*/
    for (float idx = start; idx <= stop; idx += step){

/*we do the calculations inside the printf to be more accurate*/
        printf("%f %f %f\n", idx, idx * idx * M_PI, 2 * M_PI * idx);

    }

    return 0;

}
