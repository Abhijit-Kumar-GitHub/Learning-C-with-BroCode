#include <stdio.h>

int main(){

    FILE *pF = fopen("test.txt", "r");
    char buffer[255];


    // // TO JUST READ ONE LINE
    // fgets(buffer, 255, pF);
    // printf("%s", buffer);

    // TO READ IT ALL

    // to check the availability of the file
    if(pF == NULL){
        printf("Unable to open file.\n");
    }
    else{
        while(fgets(buffer, 255, pF) != NULL){
            printf("%s", buffer);
        }
    }

    fclose(pF);
















    return 0;
}