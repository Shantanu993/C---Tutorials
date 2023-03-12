#include <stdio.h>

// int fib_recursive(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return 1;
//     }
//     else if (n == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return (fib_recursive(n - 1) + fib_recursive(n - 2));
//     }
// }

// int main()
// {
//     int num;
//     printf("Enter the number whose fibonacci series you want to find out :\n");
//     scanf("%d", &num);

//     printf("Fib %d = %d", num, fib_recursive(num));
//     return 0;
// }

// Without Recursion

// int main()
// {
//     int num, n1 = 0, n2 = 1, n3;
//     printf("Enter the number whose fibonacci series you want to find out :\n");
//     scanf("%d", &num);

//     printf("Fibonnaci series : ")
//     for (int i = 0; i < num; i++)
//     {
//         n3 = n1 + n2;
//         n1 = n2;
//         n2 = n3;
//         printf("%d ", n3);
//     }

//     printf("Fibonacci number = %d ", n3);
// }

// FROM NET

void printFibonacci(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
        printFibonacci(n - 1);
    }
}

int main()
{
    int n, num;
    printf("Enter the number of terms required in the Fibonacci series :\n");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printf("%d %d ", 0, 1);
    printFibonacci(n - 2);

    return 0;
}
