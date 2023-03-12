#include <stdio.h>

void changeValue(int *address)
{
    *address = 37565;
}

int main()
{
    int a = 34, b = 56;
    printf("The value of a now is %d\n", a);
    changeValue(&a);
    printf("The value of a now is %d\n", a);
    return 0;
}

// Quick Quiz:
// Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.

// a = 4
// b = 3

// after running the function, the values of a and b should be:
// a = 7
// b = 1

// #include <stdio.h>

// void newvalue(int *a, int *b)
// {
//     int c = *a;
//     int d = *b;
//     printf("num1 is %d and num2 is %d \n", c, d);
//     c = c + d;
//     d = c - 2 * d;
//     printf("New value of num1 is %d and that of num2 is %d \n", c, d);
//     // *a = *a + *b;
//     // *b = *a - 2 * *b;
//     // printf("%d %d \n", *a, *b);
// }

// int main()
// {
//     int num1, num2;
//     num1 = 4;
//     num2 = 3;

//     newvalue(&num1, &num2);

//     return 0;
// }