#include <stdio.h>

int main(){

    // 2D array = an array, where each element is an entire array
    // useful to for a matrix, grid or a table of data



// here we can create a 2D array by giving a second set of square brackets after the variable name and fixing the maximum no. of elements in the second brackets.
// and while providing the elements, we can have multiple arrays in curly braces separated by comma in altogether in a curly brackets
/*
    int numbers[][3] = {
                        {1, 2, 3}, 
                        {4, 5, 6}
                        };
*/

// or we can just declare the 2D array like this
// int numbers[][3]; and initialize them later. we can fix the size of rows to if we need to tho that is not necessary

int numbers[2][3];   // This will be giving us a matrix or 2 rows and 3 columns

numbers[0][0] = 1;
numbers[0][1] = 2;
numbers[0][2] = 3;
numbers[1][0] = 4;
numbers[1][1] = 5;
numbers[1][2] = 6;

// to display elements of a 2D matrix we need to use nested loops 

// printf("%d", sizeof(numbers));

//////////////////////////////////////////////////////////////////
//                                                              //
int rows = sizeof(numbers)/sizeof(numbers[0]);                  //
int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);         //
//                                                              // 
//////////////////////////////////////////////////////////////////

for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){
        printf("%d\t",numbers[i][j]);
    }
    printf("\n");
}




    return 0;
}