/*CH-230-A
A7p7.c
Kamila Ziza
kziza@constructor.university
*/

/* this is the header file, here we structure the 
definitions and we declare the functions*/


#ifndef STACK_H
#define STACK_H

/*this a global variable which is needed in the main function*/
int space;

/* we define the stack here so we don't have to define it in each file*/
struct stack{

    unsigned int count;
    int array[12]; // Container

};

/* we declare all the functions here*/
void push(struct stack* stack, int value);
int isEmpty(struct stack* stack);
int pop(struct stack* stack);

#endif