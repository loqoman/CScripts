/*

https://adventofcode.com/2019/day/2

To do this, before running the program, replace position 1 with the value 12 and replace position 2 with the value 2. What value is left at position 0 after the program halts?

Input: 
1,0,0,3, 1,1,2,3, 1,3,4,3, 1,5,0,3, 2,10,1,19,2,19,6,23,2,13,23,27,1,9,27,31,2,31,9,35,1,6,35,39,2,10,39,43,1,5,
43,47,1,5,47,51,2,51,6,55,2,10,55,59,1,59,9,63,2,13,63,67,1,10,67,71,1,71,5,75,1,75,6,79,1,10,79,83,1,5,83,87,
1,5,87,91,2,91,6,95,2,6,95,99,2,10,99,103,1,103,5,107,1,2,107,111,1,6,111,0,99,2,14,0,0


Known Opcodes
    - (1, <in1>, <in2>, <pos>) -> put in1 + in2 at pos
    - (2, <in1>, <in2>, <pos>) -> put in1 * in2 at pos
    - (99)                     -> stop the program
*/
/*

Psudo-code

> Create a ticker-tape of commands, from the input
> Create a set of flags:
> Because only two commands, only 3 flags
> pos flag
> in1 flag
> in2 flag
> Logic:
    > step 
        > if no command decoded
            > decode command
        > if command decoded
            > assign flags in order of appearance
                > in1
                > in2
                > pos
        > if all slots filled
            > execute command on the operand

*/
// Probabbly a good idea to include some library with all the advent of code stuff in it
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ADD_OPCODE 1
#define MULT_OPCODE 2
#define STOP_OPCODE 99

void clenseCommas(), addCommand();

void main() {
    FILE *fp;
    FILE *targetWrite;
    // char *charOutTest[5];

    const char *rawStrInput[200]; // const = read-only 
    
    char *newTape[200];
    char *tapeLocation;

    fp = fopen("testIn.txt","r");
    targetWrite = fopen("output.txt", "w");

    // Getting the input tape from input.txt
    fgets(rawStrInput, 100000, fp);
    strcpy(newTape, rawStrInput);
    printf("%s", rawStrInput);

    removeChar(rawStrInput, ',');

    printf("Tape currently reads:%s\n", rawStrInput);
    
    /*
    for (tapeLocation = rawStrInput; *tapeLocation != '\0'; tapeLocation+=4) {
        switch (atoi(*tapeLocation)) {
            case ADD_OPCODE:
                break;
            case MULT_OPCODE:
                break;
            case STOP_OPCODE:
                break;
            default:
                printf("I don't recgognize this opcode!");
        }
    }
    */
    addCommand(rawStrInput, rawStrInput);

    printf("Tape currently reads:%s\n", rawStrInput);
}
/*
As it pertains to returning strings:

> There are two ways to return strings that won't barf so readily.

>   1. returning buffers (static or dynamically allocated) that live for a while. In C++ use 'helper classes' (for example, std::string) to handle the longevity of data (which requires changing the function's return value), or
>   2. pass a buffer to the function that gets filled in with information.*
*/

// source: https://stackoverflow.com/questions/5457608/how-to-remove-the-character-at-a-given-index-from-a-string-in-c#5457726
// Oversimplified, this method works by walking forward through the list untill we hit the null character, 
// shifting over all the non-garbage characters, and ignoring the grabage characters
void removeChar(char *str, char garbage) {

    char *src, *dst;    // Create two pointers to characters
    for (src = dst = str; *src != '\0'; src++) { // At the start, set both pointers to each other, and go untill we hit the null character
        *dst = *src;    // Replace the value at dst with the value at src

        printf("%c\n", *dst); // Debugging
        
        if (*dst != garbage) dst++; // Increment dst, if the value at dst is not the removed character 
                                    // Increment src (By the for loop)
    }
    *dst = '\0';                    // Set the value at dst to the null character (effectivly terminating the string)
}

void addCommand(char *addCodelocation, char *rawStrInput) {
    char sum = (*(addCodelocation+1) - '0') + (*(addCodelocation+2) - '0');     // What number we need to store

    char *putLocation = addCodelocation+3;                  // Pointer to the char of the dumpLocation

    char currentPos = rawStrInput - addCodelocation;        // Our position(W.R.T the codeLocation) in the tape as a number

    signed char posDifference = *putLocation - currentPos;  // How far we need to go to get to the putLocation

    char *dumpLocation = addCodelocation + posDifference;   // The pointer of the memory location we need to dump on

    *dumpLocation = sum;


    printf("\naddCommand debug:\n");
    printf("currentPos is: %d\n", currentPos);
    printf("sum is: %d\n", sum);
    printf("first Operand is: %d\n", *(addCodelocation+1) - '0');

}

void multCommand() {

}

/*

    printf("Size on input tape is:%lu\n", sizeof(rawStrInput) / sizeof(rawStrInput[0]));

    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++) {
        *dst = *src;
        if (*dst != garbage) dst++;
    }


removeChar(foo, 'c');

<dst>                          v 
'a', 'b', 'd', 'd', 'e', 'a', '\0'
<src>                                

*/




