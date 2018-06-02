#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,k,p,sum=0,lol;

    scanf("%lld %lld",&k,&p);

    for(i=1; i<=k; i++){

        long long int n = i;
        lol = i;
        while(n)
        {
            lol = lol*10 + n%10;
            n = n/10;
        }
        sum+=lol;
    }
    printf("%lld\n",sum%p);
    return 0;
}

