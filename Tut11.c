#include <stdio.h>

int main()
{
    int a, age;

    printf("Enter your number\n");
    scanf("%d", &a);

    switch (a)
    {
    case 2:
        printf("your number is 2\n");

        printf("Enter your age\n");
        scanf("%d", &age);

        switch (age)
        {
        case 18:
            printf("age is 18");
            break;

        default:
            printf("HI");
            break;
        }
        break;

    default:
        printf("other");
        break;
    }

    return 0;
}