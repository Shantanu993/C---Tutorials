// In this task you have to write a C program that will reverse an array of integers. For that purpose, create the function that will take array as an argument and reverse an array.

// Your program should print the array before and after reversal.

// For Example:

// Before Reversal: 1, 2, 3, 4, 5, 6, 67

// After Reversal: 67, 6, 5, 4, 3, 2, 1

#include <stdio.h>
#include <string.h>

void arrayRev(int array[])
{
    for (int i = 0; i < 7 / 2; i++)
    {
        int temp = array[i];
        array[i] = array[6 - i];
        array[6 - i] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("Before reversal:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Value of %d element is %d\n", i, arr[i]);
    }
    arrayRev(arr);

    printf("\nBefore reversal:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Value of %d element is %d\n", i, arr[i]);
    }

    return 0;
}
