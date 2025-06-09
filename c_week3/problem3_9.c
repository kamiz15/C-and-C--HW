/*
CH-230-A
a3 p3.9[c]
Kamila Ziza
k.ziza@jacobs-university.de
*/

#include<stdio.h>


/* we use this function to create an array*/

double sum25(double v[], int n){
    
    double sum = 0;
    
/* we use the if loop to help determine if 
postitions 2 and 5 are valid*/

    if(n < 6){
        
        return -111;
    }
/* if they are valid than using the positions
we calculate the sum of the elemnets with index 2 and 5*/   
    else{
        
        sum = v[2] + v[5];
    }
        
    return sum;
        
}

int main(){
    
    int n;
     
    double list[20], sum;
     
    scanf("%d", &n);
/* we create a loop to take  n double values */      
    for(int i = 0; i < n; i++){
         
        scanf("%lf", &list[i]);
         
    }
 /* we call the function we created earlier*/   
    sum = sum25(list,n);
     
    if (sum == -111){
 /* based on the function that we called one of 
both of the values are invalid*/       
        printf("One or both positions are invalid\n");
        
    }
    
    else{
/* both values are correct we can find the sum*/        
        printf("sum=%lf\n", sum);
        
    }
    
    return 0;

}