#include <stdio.h>

struct structure {
    char value1;
    char value2;
};

// Stealing memory
char x = 1;
char *i; 

// General-purpose pointer to a char
char *point;

void main() {

    printf("pointer to I:%p\nValue: %d\n",&i,i);
    // de-referencing a pointer to x, the value of x being 1
    i = *&x;
    printf("pointer to X:%p\npointer to I:%p\n",&x,&i);
    printf("Value of I: %d\n",i);

    struct structure definedStruct;
    definedStruct.value1 = 8;
    definedStruct.value2 = 9;
    // Gettingvalue1
    char d = *(char *)&definedStruct;
    // Getting value 2
    char v2 = *(char *)&definedStruct + __CHAR_BIT__/8;    

    printf("%d\n",d);
    printf("%d\n",v2);
    // Can be commented
    printf("Address of definedStruct: %p\n", &definedStruct);
    printf("Address of value1: %p\n", &definedStruct.value1);
    printf("Address of value2: %p\n", &definedStruct.value2);

};