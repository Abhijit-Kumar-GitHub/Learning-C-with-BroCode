#include <stdio.h>

int main(){

/*
    // FILE *pF = fopen("test.txt", "w");      // in write mode "w" we will overwrite over the existing file. can set the path of file anywhere, also backslashes need to be double.

    // to append to a file, we use the append mode "a"
    FILE *pF = fopen("test.txt", "a");

    fprintf(pF, "\n random bunch of text try two to append");

    fclose(pF);
*/

    // file detection
    if(remove("test.txt") == 0){        // if this returns 0 that means that file was deleted successfully
        printf("That file was deleted successfully");
    }
    else{
        printf("That file was not deleted.");
    }

    return 0;
}