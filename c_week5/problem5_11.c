/*CH-230-A
A5p11.c
Kamila Ziza
kziza@constructor.university
*/


#include <stdio.h>

int prime_check(int n, int i){
    
    /* if they return sonething different from 0 they are prime*/
    if (i == 1){

        return 1;

    }

    /* one is not prime but it is a specila case*/
    else if(i == 1/2){

        return 0;

    }

    else{
        
        /* if they are divisible they are not prime*/
        if (n % i == 0){
            
            return 0;

        }

        else{
            
            /* we call the recursive function and keep lowering the
            value*/
            return prime_check(n, i - 1);

        }  

    }

}
        

int main(){
    
    int x, num;
    scanf("%d", &x);

    /*we don't have to check the valus above
    the half of the number since possiblle factors
    are sure to apper before that*/
    num = prime_check(x, x / 2);
    
    if (num == 1){
        
        printf("%d is prime\n", x);
            
    }
    
    else{
        
        printf("%d is not prime\n", x);
        
    }

return 0;

}