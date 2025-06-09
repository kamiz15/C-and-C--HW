/*CH-230-A
A5p5.c
Kamila Ziza
kziza@constructor.university
*/
#include <stdio.h>

/* global variable to be used everywhere in the code*/
int n;

double scalar_prod(double v[], double w[]){

    double scal_pro = 0;

    for (int i = 0; i < n; i++){

        /*we apply the formula*/
        scal_pro += (v[i] * w[i]);

    }

    return scal_pro;

}


double the_smallest(double generic[]){

    
    double small = generic[0];

    for (int i = 0; i < n; i++){

        if(generic[i] < small){

            /* if the following value is smaller we replace*/
            small = generic[i];

        }

    }

    return small;

}


double the_largest(double generic[]){


    double large = generic[0];

    for (int i = 0; i < n; i++){

        if(generic[i] > large){

            //*if the following value is smaller we replace*/
            large = generic[i];

        }

    }

    return large;

}


int smallest_position(double generic[]){

    int s_pos = 0;


    double idx = generic[0];

    /*we searche for the smallest value*/
    for(int i = 0; i < n; i++){

        if(generic[i] < idx){

            idx = generic[i];

        }

    }

    /* we note that position*/
    for(int j = 0; j < n; j++){

        if(generic[j] == idx){

            s_pos = j;
            break;

        }

    }

    return s_pos;

}


int largest_position(double generic[]){

    int l_pos = 0;


    double idx = generic[0];

    for(int i = 0; i < n; i++){

        if(generic[i] > idx){

            idx = generic[i];

        }

    }

    /*we note that position*/
    for(int j = 0; j < n; j++){

        if(generic[j] == idx){

            l_pos = j;
            break;

        }

    }

    return l_pos;

}


int main(){

    scanf("%d", &n);
    double v[n], w[n];

    /* we eneter the ements into the array*/
    for (int i = 0; i < n; i++){

        scanf("%lf", &v[i]);

    }

    for (int i = 0; i < n; i++){

        scanf("%lf", &w[i]);
        
    }

    /*we print according to the test case*/
    printf("Scalar product=%lf\n", scalar_prod(v, w));

    /*we have used two seperate functions for returning smallest
    and larges values vale and position since one function can only
    return one value*/

    /* we go from generic to specific*/
    printf("The smallest = %lf\n", the_smallest(v));
    printf("Position of smallest = %d\n", smallest_position(v));

    printf("The largest = %lf\n", the_largest(v));
    printf("Position of largest = %d\n", largest_position(v));

    printf("The smallest = %lf\n", the_smallest(w));
    printf("Position of smallest = %d\n", smallest_position(w));

    printf("The largest = %lf\n", the_largest(w));
    printf("Position of largest = %d\n", largest_position(w));

    return 0;

}
