#include <stdio.h>
int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a<b) printf("%lld\n",b-a);
        else printf("%lld\n",a-b);
    }
    return 0;
}
