#include <stdio.h>              //What packages to include. 
#include <string.h>             //Needed for most string operations


int address = 0000100;
char temp;


int main() {                   //Every C program has to have a main function
    
    sprintf(*temp, "%d", address);   // Sprintf takes a target, format(in this case integer), and the integer to convert
                                     // Sprintf is used to convert a integer to a string(?)
    
    printf("%d", address);
    printf(temp);
    
    return address;
}