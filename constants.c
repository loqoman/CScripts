#include <stdio.h>

char c = 10;
// pointer to c
const char* h = &c;

void main() {
    printf("%p\n", h);

    *h == 50;
    c == 5;
    printf("%d\n",c);
}