#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int test_num = 1;

int A = 2;
int B = 2;
int C = 1;

void main() {
    printf("Initilizing Taco Cart...\n");


    while (1 == 1){
        
        C = (A*A) + (B*B);
        
        B = (C*C) - (A*A);
        
        A = (C*C) - (B*B);
        
        printf("Value of A:%d\n",A);
        printf("Value of B:%d\n",B);
        printf("Value of C:%d\n\n",C);

        delay(10000000);
    }
    return;
}
/*
bool checkA(num){
    if (num = C - 2.5*B){
        return true;
    } else {
        return false;
    }
}
bool checkB(num){
    
}
bool checkC(num){
    
}
*/
void delay(unsigned int mseconds) {
    clock_t goal = mseconds + clock();
    while (goal > clock());
}