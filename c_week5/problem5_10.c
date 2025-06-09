/*CH-230-A
A5p10.c
Kamila Ziza
kziza@constructor.university
*/


#include <stdio.h>

void count_down(int n){
  
  if(n > 1){
    
    /* we call the recursive function until n=2*/
    printf("%d, ", n);
    count_down(n - 1);

  }

}


int main(){
  
  int n;
  
  scanf("%d", &n);
  
  count_down(n);
  /*we don't print a coma after the last sequence but we print a period*/
  printf("1.\n");
 
  return 0;

}