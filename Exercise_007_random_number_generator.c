#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // pseudo random numbers = A set of values or elements that are statistically random.
    //                          (Don't use these for any sort of cryptographic security)

    // using current time to generate a random seed
    srand(time(0));

    int n1 = (rand() % 6) + 1;         // rand() function gives a random no. btwn 0-32767, but we can define upper limit with %
    // comuer starts with 0, so to get results from 1 just add 1
    
    int n2 = (rand() % 6) + 1;
    int n3 = (rand() % 6) + 1;

    printf("%d", n1);
    printf("%d", n2);
    printf("%d", n3);
    
    
    return 0;
}