#include <stdio.h>

int main()
{
start:
    int inp, n;
    printf("Enter 1 for inverted triangular star pattern or 0 for triangular star pattern. ");
    scanf("%d", &inp);

    if (inp == 0)
    {
        printf("Enter no. of maximum stars.\n");
        scanf("%d", &n);

        printf("The star pattern is: \n");

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%c", '*');
            }
            printf("\n");
        }
    }
    else if (inp == 1)
    {
        printf("Enter no. of stars in first row.\n");
        scanf("%d", &n);

        printf("The inverted star pattern is: \n");

        for (int i = n; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%c", '*');
            }
            printf("\n");
        }
    }
    else
    {
        printf("Enter a valid value. \n");
        goto start;
    }

    return 0;
}
