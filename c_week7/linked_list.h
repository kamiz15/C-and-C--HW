/*CH-230-A
A7p1.c
Kamila Ziza
kziza@constructor.university
*/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H
 
#include <stdio.h>
#include <stdlib.h>
 
/*we define the structure of the list*/
struct list{
    
    int info;
    struct list *next; /* self reference */
    
};
 
 
struct list* instBeg(struct list* list1, int value);
struct list* instEnd(struct list* list2, int value);
struct list* delBeg(struct list* head);
void printlist(struct list* list3);
void memoryfreed(struct list* list4);
 
 
#endif
