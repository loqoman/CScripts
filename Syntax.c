// Syntax.c:
//      How much basic syntax elements of C can we pack into one file for future reference?
#include <stdio.h>              //What packages to include. 
#include <string.h>             //Needed for most string operations
                                //Note that most every other line has to end with a ;, however the #include does not. 

int Math_Do();                  //Can define a function above 

int value = 7;                  //Initilazing a value
int A;

char name[7] = {'D','a','r','w','i','n'};   //Array that holds 7 characters. Each character can be called with name[n] where n is the position of the character that you want. 
                                            //Worthy note that to look at each character it goes as this: D = name[0], a = name[1], r = name[2], w = name[4], ect.
                                

char numberList[7] = {1, 2, 3, 4, 5, 6};
char * listPointer;

int Vpointer = 50;              //To be user as a pointer to an integer


const int age = 12;             //Int. Commonly called an intager. This means a number from <Insert limitations here>.
                                //Const, never to be changed, however can still be referenced and looked at . 

char grade = 'F';               //Character, takes 8 bits of memory / 1 byte of memory 

void main() {                   //Every C program has to have a main function
    
    Math_Do(value);             //Function notation.
    if (value = 10) {               //If statement.
        printf("returned true!\n");   //Prints!
    }
    
    if(value = 12) {            //Example of an else/if string
        printf("If/Else returned the Ture\n");             //If the bool statement in the if is not true than it goes to the else
    }
    else if (value = 10) {                                  //Else/If. Normally to compare the value that was compared in the inital if again, to something else. 
        printf("If/Else returned the if/else\n");          //Note however that you may have an infinate string of elses
    } else {
        printf("If/Else returned the else\n");            //If niether of the above are true it will return this  
    }
                                //Ahh, switches. Very important.
   switch(grade) {              //We are comparing grade, in this case: B.
                                //of course, you can allways do nested switch statements, IE a switch inside a switch
      case 'A' :                //If the grade is A than do this code. 
         printf("Excellent!\n" );
         break;                 //Dont know how imporant this is, better include it though.
      case 'B' :                //If the grade is B than do this code.
         printf("You got a B\n");
         break;
      case 'C' :                //If the grade is C than do this code.
         printf("Well done\n" );
         break;
      case 'D' :                //If the grade is D than do this code.
         printf("You passed\n" );
         break;
      case 'F' :                            //If the grade is F than do this code.
         printf("Better try again\n" );     //I hope it isnt!
      default :                             //If what you are comparing does not match anything in the list than default to this. 
         printf("Invalid grade\n" );
    }
    printf("Your grade is  %c\n", grade );              //Also, with printf you can do something called a format input
                                                        //And it will sub the %letter with the approite value. This allows you to change the print statement in real time if need be
                                                        //Website for all the potential formats:  http://www.cplusplus.com/reference/cstdio/printf/
    /*
    ----------For loop------------ 
    for ( init; condition; increment ) {
        statement(s);
    }
    ----------While loop----------
    while(condition) {
        statement(s);
    }
    ----------Do Loop-------------
    int a = 10;
    do {
    printf("value of a: %d\n", a);
      a = a + 1;
    }while( a < 20 );
    */
    
    for (A = 7; A < 10; A = A + 1) {                    //Increment occurs at the end of the code
        printf("The current value of A is %d\n", A) ;   //Side note that this is an example of one format, %d, which stands for intiger. You need different letters for different types of varibles
    }
        
    printf("This is a pointer: %p\n", &Vpointer);       //Printing the pointer from earlier. 
                                                        //The '&' operator addresses a variable (returns the pointer to that variable)
                                                        //Conversely, the '*' operator dereferences a pointer, going to the object pointed to  
    printf("This is my name: %s\n", &name);
    /*
    Various string operations that I have not demonstrated:
    NOTE: S1 = STRING 1  AND  S2 = STRING 2. 
        -strcpy(s1,s2)------Copies string 2 into string 1
        -strcat(s1,s2)------Appends s2 onto the end of s1
        -strlen(s1)---------Returns the length of s1
        -strcmp(s1,s2)------Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2
        -strchr(s1,ch)------Returns a pointer to the first occurance of character ch in s1
        -strstr(s1,s2)------Returns a pointer to the first occurance of s2 in s1    
    */
    struct person{              // Example of haveing a structure that can hold different attributes of a person
                                // Structures seem to be very similar to Classes from Python, however you cannot write functions for them. 
        int Age;
        int height;
        char Fname[20];
        char hair_color[20];
        char eye_color[20];
    };                           //If we wanted to assign values to these...
    struct person Grandpah;      //struct [Master struct] [Name of Master struct instance]
    
    strcpy(Grandpah.Fname,"Darwin");

    /*
    ----------Pointer arithmatic-------------
    */

    listPointer = &numberList[2] - &numberList[1];          //listPointer should be 1, because in memeory the 2nd and 1st item of the list are right next to each other


    printf("listPointer (pointer) is currently %p\n", listPointer);     //Printing listPointer as a pointer

    printf("listPointer (char) is currently %d\n", listPointer);        //Casting listPointer to a char

}

int Math_Do(int number) {        //This is a function, in the form of: <return type> <funtion name>(input values)
    number = number * 3;         //All the code that you want to be called by this function 
    return 2;
}

// Whoops, this is cpp
/*
class Dog{                      // Name of class, should be caps
    public:                     // __init__, seem farmiliar?
        char nam;               // one character for nam
        int age;                // number for age, can be found by [name.a]
}
*/