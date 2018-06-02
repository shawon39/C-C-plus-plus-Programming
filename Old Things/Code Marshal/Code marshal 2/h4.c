#include <stdio.h>

int num(int x);

int main()
{
    int chocolate;
    int cups;
    printf("Enter the value \n\n");

    scanf("%d",&chocolate);

    cups = num(chocolate);

    printf("%d cups",cups);

    return 0;
}




int num(int x)
{
    return x / 8;
}
