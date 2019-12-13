/*
    First in a series on advent of code 2019 (https://adventofcode.com/2019/day/1)
    
    Santa has become stranded at the edge of the Solar System while delivering presents to other planets! 
    To accurately calculate his position in space, safely align his warp drive, and return to Earth in time to save Christmas, he needs you to bring him measurements from fifty stars.

    Collect stars by solving puzzles. Two puzzles will be made available on each day in the Advent calendar; the second puzzle is unlocked when you complete the first. Each puzzle grants one star. Good luck!

    - Fuel required to launch a given module is based on its mass. 
    - To find the fuel required for a module, take its mass, divide by three, round down, and subtract 2.

    For example:

        For a mass of 12, divide by 3 and round down to get 4, then subtract 2 to get 2.
        For a mass of 14, dividing by 3 and rounding down still yields 4, so the fuel required is also 2.
        For a mass of 1969, the fuel required is 654.
        For a mass of 100756, the fuel required is 33583

    Requirements:
        - Open a file
        - For each 'input' in the file
            - Divide it by three (rounding down)
            - Subtract 2
        - 
*/

#include <stdio.h>
#include <stdlib.h>

#define INPUT_FILE_LENGTH 100

void main() {
    FILE *fp;
    FILE *targetWrite;
    // char *charOutTest[5];
    const char *charOut[5];
    char i;
    int out;
    int numerical;


    fp = fopen("input.txt","r");
    targetWrite = fopen("output.txt", "w");


    // We know the input has 100 values in it
    for (i = 0; i < INPUT_FILE_LENGTH; i++) {
        // Reads an input casted to a char
        fgets(charOut, 10, fp);

        //printf("fgets read an input of: %s \n", charOut);

        // Converts the char to an int
        numerical = atoi(charOut);

        out = numerical / 3;
        out -= 2;

        printf("Convereted an input of: %s to an output of %d\n",charOut, out);

        fprintf(targetWrite,"%d\n",out);

    }

    // To fininsh, looked at all the outputs and summed them here: https://miniwebtool.com/sum-calculator/
    // Could have done the sum manually within the program

}