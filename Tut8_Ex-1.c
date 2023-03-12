#include <stdio.h>

int main()
{
    int a, b = 0;

    printf("Enter the number who's table you want to find \n");
    scanf("%d", &a);

    printf("The table of number %d is\n", a);
    // printf("%d X 0 = %d\n", a, a * 0);
    // printf("%d X 1 = %d\n", a, a * 1);
    // printf("%d X 2 = %d\n", a, a * 2);
    // printf("%d X 3 = %d\n", a, a * 3);
    // printf("%d X 4 = %d\n", a, a * 4);
    // printf("%d X 5 = %d\n", a, a * 5);
    // printf("%d X 6 = %d\n", a, a * 6);
    // printf("%d X 7 = %d\n", a, a * 7);
    // printf("%d X 8 = %d\n", a, a * 8);
    // printf("%d X 9 = %d\n", a, a * 9);
    // printf("%d X 10 = %d\n", a, a * 10);

    // USING LOOPS

    while (b <= 10)
    {
        printf("%d X %d = %d\n", a, b, a * b);
        b = b + 1;
    }

    return 0;
}
