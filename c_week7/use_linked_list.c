/*CH-230-A
A7p1.c
Kamila Ziza
kziza@constructor.university
*/
#include "linked_list.h"
 
 
int main(){
     
    char c1;
    struct list *head = NULL;
 
    /* we repeat forever until we reach break*/
    while(1){
        
        scanf("%c", &c1);
        
        switch(c1){
 
            case('a'):{
                
                /* in this case the number is inserted at the end*/
                int a;
                scanf("%d", &a);
 
                getchar();
                /* we call the function to preform the operation*/
                head = instEnd(head, a);
 
                break;
 
            }
 
            
            case('b'):{
 
                /* in this case the number is inserted at the begging */
                int b;
                scanf("%d", &b);
 
                getchar();
                /* we call the function to preform the operation*/
                head = instBeg(head, b);
 
                break;
 
            }
 
 
            case('p'):{
 
                /* in this case we print the list untill that point*/
                printlist(head);
   
                break;
 
            }
 
 
            case('q'):{
 
                /* we call this function to free the memory*/
                memoryfreed(head);
 
                return 0;
 
                break;
 
            }
            
            
            case('r'):{
                
                /* we call this function to preform the operatio*/
                head = delBeg(head);
     
                break;
 
            }
 
        }
 
    }
    
    return 0;
 
}
