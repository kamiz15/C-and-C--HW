/*CH-230-A
A8p3.c
Kamila Ziza
kziza@constructor.university
*/
/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

/* we write this function based on the steps found in slide 12 lecture 8*/
int enqueue(Item item, Queue *pq)
{

	/* Step 1 -> we check if the que is full using the 
    queue__is_full function from before*/

	if(queue_is_full(pq) == 1){

		puts("Queue is full");
        return 1;
	}

	/*Step 2 -> we create a new node and we do the dynamic memory
     allocation of the new node*/
	Node * node1 = (Node* )malloc(sizeof(Node));

	// we check the memory allocation
	if(node1 == NULL){

		printf("Memory allocation not possible");
		exit(0);
	}

    // step 3 -> we copy the item into the new node
	node1 -> item = item;

    // step 4 -> we set the next pointer to NULL
	node1 -> next = NULL;

    // step 5 -> if the front is empty we set the new item at the front 
	if(pq -> front == NULL){

		pq -> front = node1;

	}
    // in a previousely empty queue the rear will also be node1
	pq -> rear = node1;

	/* step 6 -> we set the previous rear pointer to point to the
     new node in a non empty queue*/
	if(pq -> rear != NULL){
        // step 7 -> we set the rear pointer to the new node 
		pq -> rear -> next = node1;

	}

    // step 8 -> we add 1 item to the count
	pq -> items++;

	return 0;

}
/* we write this function based on the steps found in slide 13 lecture 8*/
int dequeue(Item *pitem, Queue *pq)
{
	/* Step 1 -> we check if the queue is null using the 
    queue__is_empty function from before*/
	if(queue_is_empty(pq) == 1){
		puts("Queue is empty");
        return 1;
	}
	Node * node1;

	//step 2-> copy item to waiting variable
    int first = pq -> front -> item;

	/*we point to the first element since we 
	are in a first-in -first-out situation*/
    node1 = pq -> front;

	//step 3 -> we point to the next item in queue
    pq -> front = pq -> front -> next;
	pq -> items--;

	//step 4 -> we free memory
	free(node1);

	//we retrun the element to show what was added
	return first;

}
 
void printqueue(Queue *pq){
	
	Node* newnod;

	/*we point to the first element since we 
	are in a first-in -first-out situation*/
	newnod = pq -> front;
	//this loop continiue until the end of the queue
	while(newnod != NULL){

		//we print the current element
		printf("%d ", newnod -> item);
		//we use a pointer to the next to move 
		newnod = newnod -> next;

	}

	printf("\n");

}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

