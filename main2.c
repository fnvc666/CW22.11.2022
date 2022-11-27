#include <stdio.h>

int main() {

    unsigned int u1=5, u2=10;

    float  f1 = 21.3, f2 = 3.45;
    long int l1 = 20, l2 = 17;

    char c1 = 'v';
    char c2 = 'z';

// Sum
    printf("unsigned int sum %i\n", u1 + u2);
    printf("float sum %f\n", f1 + f2);
    printf("long int sum %ld\n", l1 + l2);
    printf("char sum %c\n", c1 + c2);
    printf("\n");

// Subtraction
    printf("unsigned int sub %i\n", u1 - u2);
    printf("float sub %f\n", f1 - f2);
    printf("long int sub %ld\n", l1 - l2);
    printf("char sub %c\n", c1 - c2);
    printf("\n");

// Multiplication
    printf("unsigned int multiplication %i\n", u1 * u2);
    printf("float multiplication %f\n", f1 * f2);
    printf("long int multiplication %ld\n", l1 * l2);
    printf("char multiplication %c\n", c1 * c2);
    printf("\n");

// Division
    if (u2 != 0 && f2 != 0.0 && 12!= 0 && c2 != 0)
    {
        printf("unsigned int division %i\n", u2 / u1);
        printf("float division %f\n", f1 / f2);
        printf("long int division %ld\n", l1 / l2);
        printf("char division %c\n", c1 / c2);
        printf("\n");
    }

// Modularly
    printf("modularly unsigned int %i\n", u1 % u2);
//    printf("modularly division %f\n", f1 % f2); # we cannot use this operation with float
    printf("modularly int division %ld\n", l1 % l2);
    printf("modularly division %c\n", c1 % c2);
    printf("\n");



}
