/*
CH-230-A
a3 p3.11[c]
Kamila Ziza
k.ziza@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main(){

    char one[1000], two[1000], three[1000], c, *pos;
    int l1, l2, comp;
/* we get the input fromthe user*/    
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);
    scanf("%s", &c);

/*we need to remove '\n' present in fgets*/
    one[strcspn(one, "\n")] = 0;
    two[strcspn(two, "\n")] = 0;
    
/*we give the variables l1 and l2 the values of the lengh of the strings*/
    l1 = strlen(one);
    l2 = strlen(two);
/* we use comp to compare the lenghts*/
    comp = strcmp(one, two);
/* we use pos to identify the positing of c in string two*/    
    pos = strchr(two, c);
/*1.we print the lengths*/
    printf("length1=%d\n", l1);
    printf("length2=%d\n", l2);
/*2. we print the concatenation of one and two*/
    printf("concatenation=%s\n", strcat(one, two));
/*3. we copy string two in sting three*/
    printf("copy=%s\n", strcpy(three, two));

/*p4. we use strcmp to compare based on ASCII value*/

    if (comp > 0){

        printf("one is larger than two\n");

    }

    else if(comp < 0){

        printf("one is smaller than two\n");

    }

    else{

        printf("one is equal to two\n");

    }

/*5. we check if the character holds a position in string two*/
    if (pos){

        printf("position=%ld\n", pos - two);

    }

    else{

        printf("The character is not in the string\n");

    }
    
    
    return 0;

}

    
    

    