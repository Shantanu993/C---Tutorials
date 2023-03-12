#include <stdio.h>

int main()
{
    // label:
    //     printf("we are inside label\n");
    //     goto end;
    //     printf("hello world");
    //     goto label;
    // end:
    //     printf("we are at end 1\n");
    //     printf("we are at end");

    int num;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%d Enter a number .0 to exit.\n", j);
            scanf("%d", &num);
            if (num == 0)
            {
                // break;
                goto end;
                // goto is useful when you want to get out of all the loops instead of a single one by using break.
            }
        }
    }

end:

    return 0;
}
