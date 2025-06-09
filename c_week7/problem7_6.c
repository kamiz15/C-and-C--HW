/*CH-230-A
A7p6.c
Kamila Ziza
kziza@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// we define a struct to prepresent a person
struct person {
    char name[30];
    int age;
};

typedef struct person Person;

/*we use this function to swap the data of two struc*/
void swap(Person *dat, int i){
    // fist we swap ages
    int n1 = (dat+i)->age;
    (dat+i)->age = (dat+i-1)->age;
    (dat+i-1)->age = n1;
    // than we swap names
    char n2[30];
    strcpy(n2, (dat+i)->name);
    strcpy((dat+i)->name, (dat+i-1)->name);
    strcpy((dat+i-1)->name, n2);
}
/*we use this function to bubblesort the array of the Person structs*/
void bubblesort(Person *dat, 
                int (*comp)(Person *a, Person *b),
                int (*comp2)(Person *a, Person *b),
                int n){
    /*we use "comp" to compare,if they are equal, we compare with 
    function "comp2"*/
    int swapped,compare;
    while(1){
        swapped = 0;
        for(int i = 1; i < n; i++){
            compare = comp(dat+i-1,dat+i);
            if(compare==1){
                swap(dat,i);
                swapped = 1;
            }
            else if(compare==0){
                compare = comp2(dat+i-1,dat+i);
                if(compare==1){
                    swap(dat,i);
                    swapped = 1;
                }
            }
        }
        if(!swapped)break;
    }
}
/* this is a simple function to compare by age*/
int compA(Person *a, Person *b){
    if(a->age > b->age)return 1;
    else if(a->age == b->age)return 0;
    else return -1;
}
/*we use this function to compare by name*/
int compN(Person *a, Person *b){
    int comparision = strcmp(a->name, b->name);
    if(comparision > 0)return 1;
    else if(comparision == 0)return 0;
    else return -1;
}
/* we use this function to print the list*/
void printP(Person *a, int n){
    for(int i = 0; i < n; i++){
        printf("{%s, %i}; ",(a+i)->name,(a+i)->age);
    }
    printf("\n");
}

int main(){
    char z[30];
    int n;
    fgets(z, sizeof(z), stdin);
    sscanf(z, "%i", &n);
    //we do the memory allocation
    Person *dat = (Person*)malloc(sizeof(Person)*n);
    if(dat==NULL){
        exit(1);
    }
    for(int i = 0; i < n; i++){
        fgets(dat[i].name, sizeof(dat[i].name), stdin);
        char *newline = strchr(dat[i].name, '\n');
        *newline = '\0';

        fgets(z, sizeof(z), stdin);
        sscanf(z, "%i", &(dat[i].age));
    }

    bubblesort(dat,compN,compA,n);
    printP(dat,n);

    bubblesort(dat,compA,compN,n);
    printP(dat,n);
    // we free the memory
    free(dat);

    return 0;
}