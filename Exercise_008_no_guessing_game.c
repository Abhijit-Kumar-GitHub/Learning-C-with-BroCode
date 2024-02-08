#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int MIN = 1;
    const int MAX = 100;
    int guess = 0,guesses = 0, answer = 0;

    srand(time(0)); // using current time as seed to get random numbers;

    answer =  (rand() % MAX) + MIN; // generate a random no. btwn minn and max;


    // printf("%d", answer);


    do{
        printf("\nEnter a guess(1-100): ");
        scanf("%d", &guess);
        if(guess > answer){
            printf("You guessed too high\n");
        }
        else if(guess < answer){
            printf("You guessed too low\n");
        }
        else{
            printf("%d is the correct answer\n", guess);                
        }
        guesses++;
    }while(guess != answer);

    printf("\n********************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("********************");

    return 0;
}