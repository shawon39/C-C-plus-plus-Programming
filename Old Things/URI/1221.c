#include <stdio.h>

int prime(int x)
{
    int i,prime=0;
    for(i=2; i<=sqrt(x); i++)
    {
        if(x%i==0) prime=1;
    }
    return prime;
}
int main()
{
    int p,t,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        p=prime(x);
        if(p==0) printf("Prime\n");
        else printf("Not Prime\n");
    }
    return 0;
}
