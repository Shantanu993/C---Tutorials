#include <stdio.h>

int main()
{
    int a, b;

    printf("Have you passed Maths Exam? (1 for yes/0 for no)");
    scanf("%d", &a);

    printf("Have you passed Science Exam? (1 for yes/0 for no)");
    scanf("%d", &b);

    if (a == 1 && b == 1)
    {
        printf("you have won prize of 50.");
    }

    else if (a == 0 && b == 0)
    {
        printf("you have not won any prize.");
    }

    else
    {
        printf("you have won prize of 30.");
    }

    return 0;
}