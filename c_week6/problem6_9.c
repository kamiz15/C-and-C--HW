/*CH-230-A
A6p9.c
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


/* we use a struct function to  add a element somewhere in the list*/
struct list* instSW(struct list* list3, int position, int value){
    
    struct list *cursor, *cursor2, *instSW, *temp = head;
    
    /*we conut the size so that it show error when it is higher*/
    int count = 0;
    
    while(temp!=NULL){

        temp = temp -> next;
        count += 1;

    }

    cursor = list3;

    /* we deal with the corner cases where the position is 
    smaller than 0 or larger than the size of the list*/
    if((position < 0) || (position > count)){

        printf("Invalid position!\n");
        return list3;

    }

    /*if the input is 0 we use the instBeg function*/
    else if(position == 0){

        return instBeg(list3, value);

    }

    /*if the input is the same as the size we use the instEnd function*/
    else if(position == sizeof(list3)){

        return instEnd(list3, value);

    }

    /* now that we have delt with the corner
    cases we deal with every other thing*/
    else{

        /* we do the dynamic memory allocation of the new list*/
        instSW = (struct list*) malloc(sizeof(struct list));

        
        if(instSW == NULL){

            printf("memory allocation not possible");
            return list3;

        }
        
        instSW -> info = value;
        instSW -> next = NULL;

        if(list3 == NULL){

            return instSW;

        }

        for (int i = 0; i < (position - 1); i++){

            cursor = cursor -> next;

        }

        /* we use the coursor to point at the correct position*/
        cursor2 = cursor -> next;
        cursor -> next = instSW;
        instSW -> next = cursor2;

        return list3;

    }

}


/* we use this function to print the entire list*/
void printlist(struct list* list3){
    
    struct list *p;
    
    for(p = list3; p; p = p -> next){
        
        printf("%d ", p -> info);
        
    }

    printf("\n");

}


/* we use this function to reverse the list*/
struct list* revlist(struct list* list5){
    
    struct list *reverse = NULL;
    struct list *temp = NULL;

    while(head != NULL){

        temp = head -> next;
        head -> next = reverse;
        reverse = head;
        head = temp;

   }
   
   head = reverse;
   
   return head;

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


            case('i'):{

                /*the first input is the position and the second is the
                number we want inserted*/
                int p, k;
                scanf("%d", &p);
                scanf("%d", &k);

                getchar();
                /* we call the function to preform the operation*/
                head = instSW(head, p, k);

                break;

            }


            case('R'):{
                /* in this case we reverse the list*/
                getchar();
                head = revlist(head);

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
