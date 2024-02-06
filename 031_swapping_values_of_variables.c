#include <stdio.h>
#include <string.h>

// Very important for sorting..... which is a big part of DSA

int main(){

// FOR CHARACTER TYPE


    // char x = 'X', y = 'Y', temp;

    // temp = x;
    // x = y;
    // y = temp;

    // printf("x = %c\n",x);
    // printf("y = %c\n",y);


// FOR STRING TYPE

    char a[] = "water";
    char b[] = "milkkkk";           // works only when b is larger than a.....for that we can give both of the arrays same character size
    char temp1[15]= "hf"; // we can't follow the same procedure as above because string arrays are unmodifiable.
    // thus we use strcpy() (string copy) instead of assigning it other values

    strcpy(temp1, a);
    strcpy(a, b);
    strcpy(b, temp1); 

    printf("a = %s\n", a);
    printf("b = %s\n", b);


    char j[15] = "water";
    char k[15] = "milk"; 
    char temp2[15]= "hf";

    strcpy(temp2, j);
    strcpy(j, k);
    strcpy(k, temp2); 

    printf("j = %s\n", j);
    printf("k = %s\n", k);


    return 0;
}