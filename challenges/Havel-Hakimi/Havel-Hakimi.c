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

// To get size in C:
/*
    size_t n = sizeof(array);
    element_size = n / sizeof(int)
 */
int i,j,a;
void main() {
    // All happy path
    int inputTest1[15] = {5, 3, 0, 2, 6, 2, 0, 7, 2, 5}; // => false
    int inputTest2[10] = {3, 1, 2, 3, 1, 0}; // => false
    int inputTest3[25] = {16, 9, 9, 15, 9, 7, 9, 11, 17, 11, 4, 9, 12, 14, 14, 12, 17, 0, 3, 16}; // => true

    int manipulated_arr[] = inputTest1;

    // Beginning algo with input 1
    manipulated_arr == remove_zero(manipulated_arr);

    if (sizeof(manipulated_arr) == 0) {
        printf("Havel-Hakimi exited with: false");
    }

    // Sorting
    manipulated_arr == decending_sort(manipulated_arr);

    // Prepairing for front elim
    int N = manipulated_arr[0];

    //
    manipulated_arr == &manipulated_arr + 8;
}


// Given an array remove all 0's from it
int remove_zero(int arr[]) {
    // Element size of the passed array
    int arr_size = sizeof(arr) / sizeof(int);

    // Create a new array with the same size as the passed array
    int returned_arr[arr_size];

    // For every item in the passed array
    for(i = 0; i < arr_size; i = i + 1) {
        // If that item is not 0
        if (arr[i] != 0){
            // Add that element to created array 
            returned_arr[i] = arr[i];
        }
         
    }
    return returned_arr;

}

// Given an array sort it largest number first
// 
int decending_sort(int arr[]) {
    // Element size of the passed array
    int arr_size = sizeof(arr) / sizeof(int);

    int returned_arr[arr_size];
    // Iterating through every item in the passed array
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
bool len_check(int compare_size, int arr[]) {
    
    // Element size of the passed array
    int arr_size = sizeof(arr) / sizeof(int);

    if (compare_size > arr_size){
        return true;
    } else {
        return false;
    }

}

// Given a number N and a sequence in decing order
// Subtract 1 from the first N numbers in the sequence 
int front_elim(int N, int arr[]) {
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