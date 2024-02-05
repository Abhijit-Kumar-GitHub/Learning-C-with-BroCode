#include <stdio.h>
#include <string.h>

int main(){
    // while loop = repeats a section of code WHILE SOME CONDITION is TRUE
    // a while loop may execute for infinite times or do not execute at all too

    char name[25];
    
    printf("Enter your name: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; 


    while(strlen(name) == 0){                               // researach why we can't set the condition as (name == "")
        printf("\nYou didn't enter your name!");
        printf("\nDO Enter your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }


    printf("Hello %s", name);

    return 0;
}