#include <stdio.h>
#define PI 3.14
// #define b 8.22  // WAY 2 of defining a constant. no semicolon required when defining.

int main()
{
    printf("%f\n", PI);
    int a = 5;
    // float b = 7.33;
    // b = 7.22; // b gets reassigned with no error

    // DEFINING CONSTANTS IN C

    // WAY 1
    const float b = 8.33;
    // b = 7.22; // cannot do this since b is a constant, we get an error on reassigning b

    // FORMAT SPECIFIERS

    // printf("The value of a is %d and the value of b is %f\n", a, b);

    // printf("This is a good boy %a.bf", var);  will print var with b decimal points in 'a' character space.

    // printf("%6.4f\n", b);

    printf("This %16.4f \n", b); // plus sign means first leave space and then print the number

    // printf("This %-16.4f This", b);  minus sign means first print the number and then leave space

    // in simple words it means that in space of 16 characters, print b with an accuracy of 4 decimal places.

    // ESCAPE SEQUENCES

    printf("Hello \n world\n");
    printf("Hello \\n world\n");
    printf("Hello \\ world\n");
    printf("tab character \t\t Hello \\ world\n");

    return 0;
}