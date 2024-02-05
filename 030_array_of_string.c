#include <stdio.h>
#include <string.h>

int main(){
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};


    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        printf("\n%s", cars[i]);
    }


    printf("\n\n------------\n");


    // we can't directly change the values
    // cars[0] = "Tesla";     // Thus this won't work
    // we can use string copy function to this, tho for that gotta import string.h header file

    strcpy(cars[0], "Tesla");   

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        printf("\n%s", cars[i]);
    }





    return 0;
}