/*
CH-230-A
a3 p3.5[c]
Kamila Ziza
k.ziza@jacobs-university.de
*/

#include <stdio.h>

int main (){

    char c;
    int n;

    /* we declare the sum first since we have to call 
    it againg later twice*/
    double sum = 0;

    double avgtemp;
    
    printf("input either 's' , 'p' , 't' or another character: ");
    scanf("%c", &c);

    printf("input the size of the array: ");
    scanf("%d", &n);

    /* firstly we limit the size of the array to less than 100*/
    while (n > 100){

        printf ("Please input less than 100: ");
        scanf ("%d", &n);

    }
    /* we declare an array with n elements*/
    double celsius[n]; 

    /* we add the given temp into the array*/
    printf("Add %d temperatures in the array:\n", n);
    /* this function makes it possible to add the 
    data into the array*/
    for(int id=0; id<n; id++){

        scanf("%lf", &celsius[id]);

    }

    /*we use this function to add the values before the
    switch since we need to use it a couple of times*/
    for(int i=0; i < n ; i++){

        sum += celsius[i];
        
    }
/* we use a switch statement to seperate the cation we
need to do in each case*/
    switch(c){


        case 's':

        printf("The sum of all elements in the array is: %lf\n", sum);

        break;



        case 'p':

        printf("The list of all temperatures in Celsius: \n");

        for(int t = 0; t < n; t++){

            printf("%lf°C\n", celsius[t]);

        }

        break;



        case 't':

        printf("List of all temperatures in Fahrenheit: \n");

        for(int j = 0; j < n; j++){

            double fahrenheit = ((9 * celsius[j])/5) + 32;

             printf("%lf°F\n", fahrenheit);
        
        }

        break;



        /* we use default in case other characters inputed*/
        default:

        avgtemp = sum/n;
        printf("Average of all temperatures in Celsuis is %lf\n", avgtemp);

        break;

    }
return 0;
}
