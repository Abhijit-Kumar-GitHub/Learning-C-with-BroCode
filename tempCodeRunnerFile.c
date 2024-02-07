#include <stdio.h>

int main() {
    // Define an anonymous struct
    struct {
        int x;
        int y;
    } point; // Declare a variable of the anonymous struct type

    // Initialize values for the struct members
    point.x = 10;
    point.y = 20;

    // Access and print the values of the struct members
    printf("x = %d, y = %d\n", point.x, point.y);

    return 0;
}

