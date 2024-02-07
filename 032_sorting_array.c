// using BUBBLE SORT

#include <stdio.h>

// for character array just use correct data type and format specifier, rest remains same

void sortArray(int[], int);             // function prototypes
void printArray(int[], int);


int main(){

    int array[] = {6, 3, 0, 5, 2, 8, 1, 4};
    int size = sizeof(array)/sizeof(array[0]);

    sortArray(array, size);                             // While calling functions we only need to use variable name rather than data type as in creating them
    printArray(array, size);                        




    return 0;

}


void sortArray(int array[], int size){

    for(int i = 0; i < size - 1; i++){

        for(int j = 0; j < size - 1; j++){

            if(array[j] > array[j + 1]){

                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size){

    for(int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
}
