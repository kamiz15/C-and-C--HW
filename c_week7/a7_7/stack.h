/*CH-230-A
A7p7.c
Kamila Ziza
kziza@constructor.university
*/

/* this is the header file, here we structure the 
definitions and we declare the functions*/


#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/* we define the stack here so we don't have to define it in each file*/
struct stack{

    unsigned int count;
    int array[12]; // Container

};

/* we declare all the functions here*/
void push(struct stack* stck, int value);
int isEmpty(struct stack* stck);
int pop(struct stack* stck);
void empty(struct stack* stck);
void Binary(struct stack *stack, unsigned int value);


#endif