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
// 
bool len_check(int compare_size, int arr[]) {
    
    // Element size of the passed array
    int arr_size = sizeof(arr) / sizeof(int);

    if (compare_size > arr_size){
        return true;
    }

}

// Given a number N and a sequence in decing order
// Subtract 1 from the first N numbers in the sequence 
int front_elim(int N, int arr[]) {
    // Element size of the passed array

    // Creating the array to be returned
    // IDEA: Is defining a new array(returned_arr) nessissary in each function? 
    int arr_size = sizeof(arr) / sizeof(int);
    int returned_arr[arr_size];

    for(i=0; i<N; i++){

    }
}