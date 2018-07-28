#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while(n)
    {
        int temp = n%10;
        printf("%d", temp);
        n = n /10;
    }

    return 0;
}


