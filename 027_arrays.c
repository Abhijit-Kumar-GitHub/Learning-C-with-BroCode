#include <stdio.h>

int main(){

    // array =  a data structure that can store many values of the same data type.
    // each value is called as an element of the array and can be accesed by their index which starts from 0 on LHS.

    double prices[] = {5.0 , 6.5, 68.4, 39.0}; 
    // we created this array of the data type double by adding sqaure brackets after the variable name
    // when we input value in this array we need to surround them in curly brackets separated by commas



    char name[] = "This is a string"; // a string is nothing but an array of individual characters

    printf("%.2lf", prices[3]);   // this is to print the first element of array prices

// arrays have a fixed size.
// if we dont know what values we are gonna assign we can just declare array with its size inside square brackets.

    double profit[3];

    profit[0] = 19.00;
    profit[1] = 349.00;
    profit[2] = -94.06;

    printf("\nthe profits are $%.2lf, $%.2lf and $%.2lf",profit[0], profit[1], profit[2]);

    // we can also do a mix like declaring with size and giving some values instead of all.

    return 0;
}