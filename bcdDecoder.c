#include <stdio.h>

char a = 2;

void main() {
    change_a(a);
    printf("Value of a: %d\n",a);
}

void change_a(in) {
    printf("I was given a: %d at: %p\n",in,&in);
    *&in == 4;
}