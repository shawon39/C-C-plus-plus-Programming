#include <stdio.h>

int factorial(int a)
{
    if(a==0) return 1;
    else return a * factorial(a-1);
}
int main()
{
    int n,d;
    scanf("%d",&n);
    d = factorial(n);
    printf("%d\n",d);

    return 0;
}
