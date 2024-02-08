#include <stdio.h>

enum Day{Sun = 1, Mon, Tue, Wed, Thu, Fri, Sat};        // now each of these cosntants has an associated integer with Sun having a value of 0(by default).
                                                    // we can also assign them custom values like done here





int main(){

    // enum =  a user defined tupe of named integer identifiers
    //         helps to make a program more readable
    //         can be declared within main function or outside of it.
    //         enums are constant

    enum Day today = Sun;

    printf("%d\n", today);            // enums are not strings but can be treated as int

    //if(today == 1 || today == 7){               // not that readable
    if(today == Sun || today == Sat){
        printf("It's the weekend! Party time");
    }
    else{
        printf("Gotta do work...blegh!");
    }


    return 0;
}