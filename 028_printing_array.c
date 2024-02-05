#include <stdio.h>

int main(){

    double prices[] = {5.0, 10.0, 15.0, 20.0, 58.338};

    printf("%lf", prices[2]);   // to print element individually

    // sizeof(prices) gives us the size of our array in bytes. since it is a double data type, each element occupies 8 bytes. we can also do sizeof(array[index]) to feed the size of individual element in
    // therefore, length of array = sizeof(prices)/8

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("\n$%6.2lf", prices[i]);
    }




    return 0;
}