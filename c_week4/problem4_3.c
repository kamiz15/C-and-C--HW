/*CH-230-A
A4p3.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <math.h>
/* the number of floats we can read from the keyboard*/
int num = 15;

/* we use this function now to calculate the
geometric mean and we can call it later in the code*/
float geometric_mean(float arr[], int num){

    float product = 1;
    float gmean = 1;
  /* this function calculates the product of all elements*/
    for (int i = 0; i < num; i++){
        product *= arr[i];

    }

  /* by including the math.h library we can increase the
     product to the power*/ 
    gmean = pow(product, (float)1 / num);

    return gmean;

}

 /* we use this to replace the current highest value
 with the previous one*/
float high_num(float arr2[], int num){

    int max = arr2[0];

    for (int i = 1; i < num; i++) {


        if (arr2[i] > max){

            max = arr2[i];

        }

    }

    return max;

}

 /* we use this to replace the current lowest 
 value with the previous one*/
float low_num(float arr3[], int num){

    int min = arr3[0];

    for (int i = 1; i < num; i++) {
        

        if (arr3[i] < min){

            min = arr3[i];

        }

    }

    return min;

}

/* we use this function to add all the 
elements of the array*/
float sum_num(float arr4[], int num){

    float sum = 0;

    for (int i = 0; i < num; i++){


        sum += arr4[i]; 

    } 
    
    return sum;

}


int main(){

    char c;
    float geomean[num];

    printf("Pleas input 15 float, in case you want to stop input a negative number\n");

    for(int idx = 0; idx < num; idx++){

        scanf("%f", &geomean[idx]);

    
        if (geomean[idx] < 0){
/* in case the user entered a negative number to stop the
array we need to remove it*/ 
            geomean[idx] = '\0';
            num = idx;

            break; 

        }
 
    }
/* we get the input from the user to detemine the action we 
want to take with the array*/
    getchar();
    printf("Please input  'm' , 'h' , 'l' or 's': ");
    scanf("%c", &c);

/* we use the switch statement to give the appropriate output in each case*/    
    switch(c){

        case 'm':
        printf("Geometric mean of the array = %f\n", geometric_mean(geomean, num));
        break;

        case 'h':
        printf("Highest number in the array = %f\n", high_num(geomean, num));
        break;

        case 'l':
        printf("Lowest number in the array = %f\n", low_num(geomean, num));
        break;

        case 's':
        printf("Sum of all numbers in the array = %f\n", sum_num(geomean, num));
        break;
    }
    return 0;
}