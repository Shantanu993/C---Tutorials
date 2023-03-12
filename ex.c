#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    // or operator will not be used here
    {
        printf("You have entered alphabet %c", ch);
    }
    else if (ch >= '0' && ch <= '9')
    // or operator will not be used here
    {
        printf("you have entered digit %c", ch);
    }
    else
    {
        printf("you have neither entered an alphabet nor a digit.");
    }

    return 0;
}
