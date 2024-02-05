#include <stdio.h>

double square(double x){            // here we have to specify in the start of function what is the data type of the return we are expecting
    //double result = x * x;
    //return result;
    return x * x;
}

int main(){
    double x = square(3.14);
    printf("%lf",x);
    return 0;
}