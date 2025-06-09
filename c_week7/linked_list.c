/*CH-230-A
A7p1.c
Kamila Ziza
kziza@constructor.university
*/
#include "linked_list.h"
 
 
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
