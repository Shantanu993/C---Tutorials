#include <stdio.h>

float conv1(float number)
{
    float n = number / 1.609;
    return n;
}
float conv2(float number)
{
    float n = number / 12;
    return n;
}
float conv3(float number)
{
    float n = number / 39.37;
    return n;
}
float conv4(float number)
{
    float n = number / 2.54;
    return n;
}
float conv5(float number)
{
    float n = number / 2.205;
    return n;
}

int main()
{
    int input;
    printf("1. kms to miles\n2. inches to foot\n3. inches to meters\n4. cms to inches\n5. pound to kgs\nWhich conversion you need to perform :\n");
err:
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        // divide the length value by 1.609
        float a;
        printf("Enter the value in kms to be converted into miles : \n");
        scanf("%f", &a);
        printf("%f kms is equal to %f miles", a, conv1(a));
        break;
    case 2:
        // divide the length value by 12

        printf("Enter the value in inches to be converted into foot : \n");
        scanf("%f", &a);
        printf("%f inches is equal to %f foot", a, conv2(a));
        break;
    case 3:
        // divide the length value by 39.37

        printf("Enter the value in inches to be converted into meters : \n");
        scanf("%f", &a);
        printf("%f inches is equal to %f meters", a, conv3(a));
        break;
    case 4:
        // divide the length value by 2.54

        printf("Enter the value in cms to be converted into inches : \n");
        scanf("%f", &a);
        printf("%f cms is equal to %f inches", a, conv4(a));
        break;
    case 5:
        // for an approximate result, divide the mass value by 2.205

        printf("Enter the value in pounds to be converted into kgs : \n");
        scanf("%f", &a);
        printf("%f pounds is equal to %f kgs", a, conv5(a));
        break;

    default:
        printf("Enter a valid number :\n");
        goto err;
        break;
    }

    return 0;
}
