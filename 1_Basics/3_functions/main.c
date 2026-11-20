// This file demonstrates a simple use of functions in C

#include <stdio.h>

/* Start by sayinf what you want to return from it  ('void' if you don't want to return anything)
    then the name,
    open bracket, and declare anything you need to give the function to run, i.e. a variable that has a number
*/
float twosum(float a, float b) {    // We have 2 variables passed through, a and b, both floats, so a decimal number can be given
    float result = (a + b); // We declare a variable result that is a float, that is equal to a + b
    return result;  // We return result
}

float twodiv(float a, float b) {
    if (b == 0) {   // Here, we account for 0 division and just assume it results in 0, that's because I feel like saying n/0 = 0.
        return 0;   // See this? This is me saying that anything divided by 0 is 0.
    } else {
        float result = (a/b);   // Now, if b isn't 0, we do some actual maths
        return result;  // And the result is returned
    }
}
int main() {
    float a = twosum(1, 3); // a is equal to whatever twosum returns when we call it
    printf("%.3f\n", a);    // And we can print it
    
    float b = twodiv(10,3);
    printf("%.3f\n", b);

    float c = twodiv(1, 0); // Similar to the previous two examples, but here we call twodiv
    printf("%.3f\n", c);
    
    return 0;
}