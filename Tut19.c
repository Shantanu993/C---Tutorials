#include <stdio.h>

// declared before to avoid error.
int sum(int a, int b);

// Ex1 - With arguments and without return value.
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

// Ex2 - Without arguments and with return value.
int takenumber()
{
    int i;
    printf("\nEnter a number ");
    scanf("%d", &i);
    return i;
}

// Ex3 - Without arguments and without return value.
void onlyprint()
{
    printf("Text you want to display.\n");
}

int main()
{
    int a, b, c, d;
    a = 4;
    b = 5;
    c = sum(a, b);
    printf("The sum of numbers is %d \n", c);
    printstar(2);

    d = takenumber();
    printf("The number is %d \n", d);

    onlyprint();
    return 0;
}

// Ex4 - With arguments and with return value.
int sum(int a, int b)
{
    return a + b;
}