/*CH-230-A
A6p8.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>


struct list* head = NULL;

/*we define the structure of the list*/
struct list{
    
    int info;
    struct list *next; /* self reference */
    
};
        

/* we use a struct function to  add a element at the
beginning of the list*/
struct list* instBeg(struct list* list1, int value){
    
    struct list *instBeg;

    /* we do the dynamic memory allocation of the list*/
    instBeg = (struct list*) malloc(sizeof(struct list));
        
    if (instBeg == NULL){
        
        printf("memory allocation not possible");
        return list1;

    }

    /* we push the value to the front of the list*/
    instBeg -> info = value;
    instBeg -> next = list1;
       
    return instBeg;

}


/* we use a struct function to  add a element at the
end of the list*/
struct list* instEnd(struct list* list2, int value){
    
    struct list *cursor, *instEnd;
    
    /* we use a coursor pointer to navigate throught the list*/
    cursor = list2;

    instEnd = (struct list*) malloc(sizeof(struct list));

    if(instEnd == NULL){

        printf("memory allocation not possible");
        return list2;

    }

    /* we push the value to the front of the list*/
    instEnd -> info = value;
    instEnd -> next = NULL;

    /* if there is no list it displays it self or it is added
    at the end*/
    
    if(list2 == NULL){

        return instEnd;

    }
    
    while(cursor -> next != NULL){
        
        cursor = cursor -> next;
        
    }
    
    cursor -> next = instEnd;

    return list2;

}


/* we use this function to print the entire list*/
void printlist(struct list* list3){
    
    struct list *p;
    
    for(p = list3; p; p = p -> next){
        
        printf("%d ", p -> info);
        
    }

    printf("\n");

}


/* we dispose of a previousely allocated list*/
void memoryfreed(struct list* list4){
    
    struct list* nextelem;
    
    while(list4 != NULL){
        
        nextelem = list4 -> next;
        free(list4);
        list4 = nextelem;

    }

}


/* we delete the begging of the list*/
struct list* delBeg(struct list* head){
    
    struct list* delBeg;
    
    /*we either delete nothing or we delete the
    first by using a pointer*/
    
    if(head == NULL){
        
        return head;

    }

    else{
        
        delBeg = head;
        head = head -> next;

        free(delBeg);

        return head;

    }

}


int main(){
     
    char c1;

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
