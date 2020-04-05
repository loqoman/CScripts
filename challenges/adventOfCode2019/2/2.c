/*

https://adventofcode.com/2019/day/2

To do this, before running the program, replace position 1 with the value 12 and replace position 2 with the value 2. What value is left at position 0 after the program halts?

Input: 
1,0,0,3,1,1,2,3,1,3,4,3,1,5,0,3,2,10,1,19,2,19,6,23,2,13,23,27,1,9,27,31,2,31,9,35,1,6,35,39,2,10,39,43,1,5,
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
#include 

void main() {
    FILE *fp;
    FILE *targetWrite;
    // char *charOutTest[5];
    const char *charOut[5];
    char i;
    int out;
    int numerical;

}