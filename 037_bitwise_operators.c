#include <stdio.h>

int main(){

    // & = and
    // | = or
    // ^ = xor
    // << = left shift
    // >> = right shift

    int x = 6;  // 6 = 0000 0110
    int y = 12; // 12= 0000 1100
    int z = 0;  // 0 = 0000 0000

    int _and = x & y;
    int _or = x | y;
    int _xor = x ^ y;
    int _left2 = x << 2;
    int _right2 = x >> 2;

    printf("and = %d,\nor = %d,\nxor = %d,\nshift left by two = %d,\nshift right by two = %d", _and, _or, _xor, _left2, _right2);


    return 0;
}