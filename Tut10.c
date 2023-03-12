#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("you can vote!");
    }

    else if (age >= 10)
    {
        printf("You can vote for children!");
    }

    else
    {
        printf("You cannot vote!");
    }

    return 0;
}
