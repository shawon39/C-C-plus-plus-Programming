#include <stdio.h>

int fact(int x)
{
    if(x==0) return 0;
    else return x + fact(x-1);
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d\n",fact(x));
    return 0;
}
