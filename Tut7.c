#include <stdio.h>

int main()
{
    int a, b;
    /*
    int a;
    float b;
    */
    // float a, b;
    a = 2;
    b = 3;

    //ARITHMETIC OPERATORS

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a / b = %f\n", a / b); // To get result in decimals use float for one or both the numbers.
    // %f is to get result in form of floating point numbers
    // %d is used to get result in form of integers
    printf("a * b = %d\n", a * b);
    printf("a % b = %d\n", a % b); // Modulus operator returns the remainder.

    // TRUE MEANS 1
    // FALSE MEANS 0

    // RELATIONAL OPERATORS

    printf("is a equal to b or not => %d\n", a == b);

    // LOGICAL OPERATORS

    printf("a && b = %d\n", a && b);       // both a AND b should be true (both operands should be non-zero)
    printf("a || b = %d\n", a || b);       // one OR both should be true (one or both operands should be non-zero)
    printf("!(a && b) = %d\n", !(a && b)); // NOT operator. It is used to reverse the logical state of its operand. If conditions is true, then Logical NOT operator will make it false.

    // BITWISE OPERATORS

    printf("a & b = %d\n", a & b); // This will be true for the condition ie. binary values of both a AND b should be 1 (ie. true)
    printf("a | b = %d\n", a | b); // This will be true when, binary value of both the numbers or any one number should be 1 (ie. both true or any one true)
    printf("a ^ b = %d\n", a ^ b); // it is pronounced as a exclusive-or b, or
    // a xor b

    // This will be true for only condition ie.binary value of one number should be 1(ie.true) and binary value or the other number should be 0 (ie.false)

    //  ASSIGNMENT OPERATORS

    printf("a += %d\n", a += 2);
    printf("a -= %d\n", a -= 2);
    printf("a *= %d\n", a *= 2);
    printf("a /= %d\n", a /= 2);

    return 0;
}