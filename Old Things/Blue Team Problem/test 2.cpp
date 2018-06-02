#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long T,S,l,n,c=1;
//     freopen("check.txt","r",stdin);
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld",&S);
        l = ceil(sqrt(S));
        printf("%lld\n",l);

        n = l*l-l+1;
         printf("%lld\n",n);
        if(l%2==1)
            if(S<n)
                printf("Case %lld: %lld %lld\n",c++,l,l-n+S);
            else
                printf("Case %lld: %lld %lld\n",c++,l-S+n,l);
        else
        {
            if(S<n)
                printf("Case %lld: %lld %lld\n",c++,l-n+S,l);
            else
                printf("Case %lld: %lld %lld\n",c++,l,l-S+n);
        }
    }
    return 0;
}
