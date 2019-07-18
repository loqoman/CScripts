/*
2019/07/16 - arrays.c

Demonstrating fuctions on arrays

TODO: Move to syntax.c 
*/

// https://stackoverflow.com/questions/5378768/returning-arrays-pointers-from-a-function
#include <stdio.h>

int i;

int my_array[10] = {1,2,3,4,5,6,7,8,9,10};
int final_arr[10];

void main() {
 
    int arr_size = sizeof(my_array) / sizeof(int);

    printf("DEBUG: created an array with size: %d\n", arr_size);

    fix_my_array(my_array, final_arr);

}

// Returns a pointer to the start of the wanted array
// Subtract 1 from every element of an array
void fix_my_array(int arr[], int result[]){

    // Size of the array in element
    int arr_size_element = 10; //sizeof(arr) / sizeof(int);

    printf("DEBUG: Looping with an array size of: %d\n", arr_size_element);

    for(i = 0; i < arr_size_element ; i+=1) {
        result[i] = arr[i] - 2;  
        printf("DEBUG: Added a %d to returned_arr\n", result[i]);
    } 

    printf("DEBUG: exicited for loop\n");


}