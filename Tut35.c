#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[54];
    printf("The strcmp for s1, s2 returned %d ", strcmp(s1, s2));
    // puts(strcat(s1, s2));
    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The length of s2 is %d\n", strlen(s2));
    // printf("The reversed string s1 is: ");
    // puts(strrev(s1));
    // printf("The reversed string s2 is: ");
    // puts(strrev(s2));

    // strcpy(s3 ,strcat(s1, s2));
    // puts(s3);

    return 0;
}
// QUIZ:
// allow user to enter two strings and then concatenate them by saying that
// str1 is a friend of str2

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char frnd1[30];
//     char frnd2[30];
//     char stmnt[] = " is a friend of ";

//     printf("Enter name of friend 1: \n");
//     gets(frnd1);
//     printf("Enter name of friend 2: \n");
//     gets(frnd2);

//     puts(strcat(strcat(frnd1, stmnt), frnd2));

//     return 0;
// }