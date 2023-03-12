#include <stdio.h>

int main()
{
    // int marks[] = {14, 24, 34, 44};

    // int marks[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter marks of student %d :\n", i + 1);
    //     scanf("%d", &marks[i]);
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Marks of student %d is %d\n", i + 1, marks[i]);
    // }

    // int marks[4];
    // marks[0] = 4;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // marks[0] = 14;
    // marks[1] = 24;
    // marks[2] = 34;
    // marks[3] = 44;
    // printf("Marks of student 1 is %d\n", marks[0]);

    // 2-D array

    int value[2][4] = {{14, 24, 34, 44},
                       {2, 3, 6, 7}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("the value of %d, %d element of the array is %d\n", i, j, value[i][j]);
            printf("%d ", value[i][j]);
        }
        printf("\n");
    }

    return 0;
}