/* This file demonstrates the uses of variables. (And logic flow)
    Variables are like boxes you put some data into
    Think of it like "I have a box for this thing"
    So you have a box for a name, a box for an age, and anything else you think can be given a value
    A set of values(putting multiple things into a box) is ussualy making an array
*/

#include <stdio.h>
#include <stdbool.h>    // This is for boolean values. Those are on or off

int main() {
    /*  Start by saying what type of variable it is
        then what the variable is called.
        You can end it early with a ; if you dont want it to have a value yet.
        Otherwise, do = then the data, then ;
    */
    int age = 16;   // int means whole number
    const float pi = 3.1415;    // const means it won't change, and float means it has decimal places
    char letter = 'A';  // char means a charcter. A single character means using ' around the value
    char name[] = "Jacob";  // This is an array of characters. AKA a String. It has " around it
    bool is_online = true;  // This is a boolean. It's true or false. No inbetween.

    printf("I am %d years old\n", age); // %d is to say "A decimal goes here", and after the strnig segment, then we say age goes there
    printf("pi ≈ %.4f\n", pi);  // %f alone would add 0s to the end of it, but by putting .4 before the f, it only does 4dp
    printf("The chosen letter was %c\n", letter);   // %c is for characters
    printf("I am %s\n", name);  // %s is for strings
    
    // Bellow is some logic flow, this means that depending on SOMETHING, one thing or the other happens
    if (is_online) {    // Because is_online is a boolean, we can put this in on its own. If it's true(which it is in this case), the code inside it's {} will run
        printf("I am online");  // This will run
    } else {    // If is_online is false, the code bellw will run instead
        printf("I am not online");  // This won't run because is_online is true
    }

    return 0;
}