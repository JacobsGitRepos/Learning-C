// "Comments" aren't read by the compiler, and to start a comment in C, you use "//"
/*
    You can also do a comment like this by doing one / followed by *
    Then when you're done with your multi-line comment * followed by /
*/

/* This program is soley for the purpose of doing 1 output*/

#include <stdio.h>  // This is required to use input and output

int main(){ // All C programs you run have a main function. This is where the code actualy starts
    printf("Hello World\n");    // All lines of code need a semi-colon at the end of them.
    /* A semi-colon for all intensive purposes means
        "End the line and do it"
    */

    return 0;   // Sucessful exit
}