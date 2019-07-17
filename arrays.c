#include <stdio.h>

int i;

void main() {
    int my_array[10] = {1,2,3,4,5,6,7,8,9,10};
 
    for (i=0;i==10;i++){
        int *ptr = &my_array[i];

        printf("%p", ptr);
    }

    // printf("\n%p",ptr);
}