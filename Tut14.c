#include <stdio.h>

int main()
{
    int num, i;
    i = 0;
    printf("Enter your number\n");
    scanf("%d", &num);

    while (i < num)
    {
        printf("%d", i + 1);
        i = i + 1;
    } //No semicolon is there.

    return 0;
}