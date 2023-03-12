#include <stdio.h>

int main()
{
    printf("hello world\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d. Enter your age \n", i);
        scanf("%d", &age);

        // if (age > 10)
        // {
        //     break;
        // }
        if (age == 0)
        {
            /* code */
            printf("Invalid");
            break;
        }
        if (age > 10)
        {
            continue;
        }

        printf("We have not come across any continue statement\n");
        printf("We have not come across any continue statement\n");
        printf("We have not come across any continue statement\n");
        printf("We have not come across any continue statement\n");
    }

    return 0;
}
