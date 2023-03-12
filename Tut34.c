#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    // char str[] = {'S', 'h', 'a', 'n', 'u', '\0'};
    // OR
    // char str[] = "Shanu";
    // printStr(str);
    printf("Enter your string: \n");
    char str[30];
    gets(str);
    printf("Using printStr:\n");
    printStr(str);
    printf("Using printf:\n%s \n", str);

    printf("Using puts:\n");
    puts(str);

    return 0;
}