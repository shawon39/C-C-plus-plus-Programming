#include <stdio.h>
#include <math.h>
int main()
{
    int t,i;
    long long k,n,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&k);
        n=sqrt((k-1)*2);
        x=(n*(n+1)/2+1);
        if(x==k) printf("1 ");
        else printf("0 ");
    }
    printf("\n");
    return 0;
}
