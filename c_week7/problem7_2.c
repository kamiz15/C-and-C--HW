/*CH-230-A
A7p2.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node *front = NULL, *rear = NULL;

struct node {

    char info;
    struct node *next;
    struct node *previous;

};

/* we use this function to put an element at the beginning*/
void instBeg(char instBeg) {
    
    /*navigate through the list and add new values*/
    struct node *move;

    /* we do dynamic memory allocation of the list*/
    move = (struct node *) malloc(sizeof(struct node));

    if (move == NULL){
        printf("Memory allocation not possible");
        exit(0);
    }

    //place the character at the beginning
    move->info= instBeg;

    if (front == NULL) {
        front = rear = move;
        move->previous = NULL;
        move->next = NULL;
    }
    else {
        move->next = front;
        front->previous = move;
        move->previous = NULL;
        front = move;
    }
}

/* we use this function to remove certain elements from the list*/
void delElm(char delElm) {
    // first, we need to check if the character exists within the list
    bool check = true;
    struct node *move = front;

    while (move) {
        /* if the character is found, we move to the 'else' */
        if (move->info != delElm) {
            move = move->next;
        }
        /* we replace the deleted element and the one next to it */
        else {
            struct node *follow = move;
            move = move->next;
            /* if the pointer is at the front, we move through the list increasingly */
            if (follow == front) {
                front = front->next;
                if (front) {
                    follow->next->previous = NULL;
                }
            }
            /* if the pointer is at the rear, we move through the list decreasingly */
            else if (follow == rear) {
                rear = follow->previous;
                follow->previous->next = NULL;
            }
            else {
                follow->previous->next = follow->next;
                if (follow->next) {
                    follow->next->previous = follow->previous;
                }
            }
            check = false;
            // we free the memory
            free(follow);
        }
    }
    /* we do this if the element is not found */
    if (check == true) {
        printf("The element is not in the list!\n");
    }
}

/* this function just prints the list */
void printL() {
    // to go from the front to the rear
    struct node *print = front;
    while (print) {
        printf("%c ", print->info);
        print = print->next;
    }
    printf("\n");
}

/* we use this function to print in reverse */
void printRL() {
    // to go from rear to front
    struct node *print = rear;
    while (print) {
        printf("%c ", print->info);
        print = print->previous;
    }
    printf("\n");
}

int main() {
    while (1) {
        char activity;
        int determine;
        scanf("%d", &determine);
        getchar();

        switch (determine) {
            /* we call the function to insert at the beginning */
            case 1: {
                scanf("%c", &activity);
                instBeg(activity);
                break;
            }

            /* we call the function to remove a element*/
            case 2: {
                scanf("%c", &activity);
                delElm(activity);
                break;
            }

            /* we call the function to print the list*/
            case 3: {
                printL();
                break;
            }

            /*we call the function to print the list in reverse*/
            case 4: {
                printRL();
                break;
            }

            /*we end the exectution*/
            case 5: {
                exit(0);
                break;
            }

            /* in case an other value is inputed by the user*/
            default: {
                printf("input a value between 1 and 5\n");
                break;
            }
        }
    }
    return 0;
}
