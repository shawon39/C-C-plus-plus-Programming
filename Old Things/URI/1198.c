#include <stdio.h>
int main()
{
    long long int v,t;
    while(scanf("%lld%lld",&v,&t)!=EOF)
    {
        if(t>v) printf("%lld\n",t-v);
        else printf("%lld\n",v-t);
    }
    return 0;
}

