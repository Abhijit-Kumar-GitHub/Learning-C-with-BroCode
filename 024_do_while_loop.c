#include <stdio.h>

int main(){
    // here the main difference is that the code gets executed at least once
    // then it checks if the condition is true to loop the code again

    int number = 0;
    int sum = 0;

    do{
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if(number > 0 ){
            sum += number;
        }
    }while(number > 0);

    printf("the sum is %d",sum);

    return 0;
    }   