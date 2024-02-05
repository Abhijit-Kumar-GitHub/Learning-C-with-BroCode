#include <stdio.h>

void hello(char[], int);        // function prototype


/*
Benefits of function prototype:-
    -> easier to navigate a program with main() at the top
    -> Helps with debugging
    -> Commonly used in Header files(we'll study this later)
*/


int main(){

    //function prototype is a function declared, w/o a body, before main()
    //ensures that calls to a function are made with correct number of arguments

    // Many C compilers do not check for parameter matching
    // Missing or excess argument do not result in unexpected behaviour
    // A missing prototype cause the compiler to flag an error 

    char name[] = "Abhijit";
    int age = 22;

    hello(name, age);

    return 0;


}
void hello(char name[], int age){
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
    }