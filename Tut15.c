#include <stdio.h>

int main()
{
    int i, j;
    // int i=0, j=0;
    printf("Enter the number\n");
    scanf("%d", &i);

    // for (i = 0; i < 5; i++,j++)
    // for (i = 0; i < 5, j < 9; i++,j++)
    for (; i < 5; i++)
    // for (i=0 ; i < 5;)
    // for (; i < 5;)
    {
        printf("%d %d\n", i, j);
        // i++, j++;
    } //No semicolon is there.

    return 0;
}