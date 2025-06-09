/*
CH-230-A
a3 p3.8[c]
Kamila Ziza
k.ziza@jacobs-university.de
*/

#include <stdio.h>
/* function for sum of inputs*/
float do_sum(float math[], int n){

    float sum = 0;

    /* we add ten floats or those before -99.0*/
    for(int i = 0; i < n; i++){

        sum += math[i];

    }

    return sum;
}
/* function for avarage of inputs*/

float do_avg(float sum, int n){

    /*we calculate the avarage of ten floats or
    those before -99.0*/
    float average = sum/ n;
    return (average);

}


int main(){ 
    
    int n = 10;
    float sum = 0, average;
    float math[n];
/* we use this function to count the elements*/
    for(int idx = 0; idx < n; idx++){

        scanf("%f", &math[idx]);

/*if the user wnats to stop inputing 
they can enter -99.0 and get the sum*/
        if (math[idx] == -99.0){

         
/* we remove -99.0 from the array and than change 
the value of n as a limit in the do_sum and 
do_avg functions*/
            math[idx] = '\0';
            n = idx;

            break; 

        }
 
    }

/* now we call the values from the previous functions*/
    sum = do_sum(math, n);
    average = do_avg(sum, n);

    printf("Sum=%f\n", sum);
    printf("Average=%f\n", average);

    return 0;

}