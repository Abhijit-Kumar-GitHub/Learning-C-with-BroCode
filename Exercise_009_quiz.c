#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = {"1. What year did the C language debut?: ",
                             "2. Who is credited with creating C?: ",
                             "3. What is the predecessor of C?"};


    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                           "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Otto Octavious",
                           "A. Objective C", "B. B", "C. C++", "D. C#"};

    
    char answers[3] = {'B', 'A', 'B'};

    int numofQ = (sizeof(questions))/(sizeof(questions[0]));

    char guess = 'a';
    int score = 0;

    printf("QUIZ\n");

    for(int i = 0; i < numofQ; i++){
        
        printf("\n******************\n");
        printf("%s\n", questions[i]);
        // printf("******************\n");

        for(int j = i * 4; j < (i * 4) + 4; j++){
            printf("\t%s\n", options[j]);
        }

        printf("Enter your answer(option): ");
        scanf("%c", &guess);            // after scanf we have a newline character in input buffer
        scanf("%*c");                    // clear the \n character from input buffer

        guess = toupper(guess);

        
        if(guess == answers[i]){
            
            printf("RIGHT\n");
            score++;
        }
        else{
            
            printf("WRONG\n");
        }
    }

    printf("***********************************\n");
    printf("FINAL SCORE: %d/%d\n", score, numofQ);
    printf("***********************************\n");

    return 0;
}