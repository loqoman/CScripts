/*
    /challenges/Havel-Hakimi.c - 2019/07/16

    r/dailyprogrammer challange #378: https://www.reddit.com/r/dailyprogrammer/comments/bqy1cf/20190520_challenge_378_easy_the_havelhakimi/

    Objectives:
        - Unit testing
        - Conserving Memory
        - Efficant programming

    Features:
        - Ordering an array
        - 

 */

#include <stdbool.h>

int i,j,a;
void main() {
    // All happy path
    int inputTest1[15] = {5, 3, 0, 2, 6, 2, 0, 7, 2, 5}; // => false
    int inputTest2[10] = {3, 1, 2, 3, 1, 0}; // => false
    int inputTest3[25] = {16, 9, 9, 15, 9, 7, 9, 11, 17, 11, 4, 9, 12, 14, 14, 12, 17, 0, 3, 16}; // => true

    int manipulatedArray[] = inputTest1;

    // Can be checked early; We don't need to run any more program if this is the case
    if (sizeof(manipulatedArray) == 0) {
        printf("Havel-Hakimi exited with: false");
    }

    // Get the size (TODO: Redo with vectors in c++)
    char manipualated_arr_size = sizeof(manipulatedArray) / sizeof(int);

    manipulatedArray == remove_zero(manipulatedArray, manipualated_arr_size);

    for (i = 0; i < manipualated_arr_size; i++) {
        printf("%d",manipulatedArray[i]);
    }
    /*
    // Need to recalculate the size of the array
    int manipualated_arr_size = sizeof(manipulatedArray) / sizeof(int);

    // Sorting
    manipulatedArray == decending_sort(manipulatedArray);

    // Prepairing for front elim
    int N = manipulatedArray[0];

    //
    manipulatedArray == &manipulatedArray + 8;
    */
}


// Given an array remove all 0's from it
int * remove_zero(int arr[], char arr_size) {
    // Create an array to represent all the positions we need to remove
    int removalPositions[arr_size];
    // Identifying 0's
    for (i = 0; i < arr_size; i++) {
        if (arr[i] == 0) {
            // Arr
            removalPositions[i] = i;
        } 

    }
    // We know WITHIN this scope the size of removalPosotions
    char removalPositionsSize = sizeof(removalPositions) / sizeof(int);
    // Removing 0's from the array
    // FWIW, this series of functions simply layers a shifted version of the array on top of the old one,
    // Starting at the 'position' of the wanted removed entry.
    for (i = 0; i < removalPositionsSize; i++) {
        char removalPos = removalPositions[i];
        for (i = removalPos - 1; i < removalPositionsSize - 1; i++) {
            arr[i] = arr[i+1];
        }
    }

    return arr;

}

// Given an array sort it largest number first
int decending_sort(int arr[]) {
    // Element size of the passed array
    int arr_size = sizeof(arr) / sizeof(int);

    int returned_arr[arr_size];
    // Iterating through every item in the passed array
    // Lititerally a binary sort
    // Could(should) be done with just one array
    for (i = 0; i < arr_size; i++) {

            // Looking at the 'next number' in the array
            for (j = i + 1; j < arr_size; ++j) {

                // If the 'next number' is greater than the 'current number' in the array
                if (arr[i] < arr[j]) {

                    // Swap the elements
                    a = arr[i];
                    returned_arr[i] = arr[j];
                    returned_arr[j] = a;
                }
            }
    }

    return returned_arr;
}

// Given a number N and a array, return true if N is greater than the num of answers
// False otherwise
bool len_check(int compare_size, int arr[], char arr_size) {
    
    // Element size of the passed array
    if (compare_size > arr_size){
        return true;
    } else {
        return false;
    }

}
/*
// Given a number N and a sequence in decing order
// Subtract 1 from the first N numbers in the sequence 
int front_elim(int N, int arr[], char arr_size) {
    // IDEA: Is defining a new array(returned_arr) nessissary in each function? 
    //       Are these varibles using unneeded memory?

    // Creating the array to be returned
    int returned_arr[] = arr;

    // Increment over the first N items in the arrays
    for(i=0; i<N; i++){
        // Decrement that value in the returned array
        returned_arr[i] = arr[i]--;
    }

    return returned_arr;
}
*/