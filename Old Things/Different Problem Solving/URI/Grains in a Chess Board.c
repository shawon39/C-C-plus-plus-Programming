#include <stdio.h>
#include <math.h>
int main()
{
    int t,x;
    long long res;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        res = (pow(2,x)/12000);
        printf("%lld kg\n",res);
    }
    return 0;
}
