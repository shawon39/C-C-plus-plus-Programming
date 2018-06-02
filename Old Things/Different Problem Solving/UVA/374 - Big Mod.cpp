#include <bits/stdc++.h>
using namespace std;

long long int BigMod(long long int b,long long int p, long long int m)
{
    if(p==0) return 1;

    else if( p%2==0 ){
        long long int half = BigMod(b,p/2,m);
        return (half*half)%m;
    }

    else if( p%2 == 1 ){
        long long int part1 = b%m;
        long long int part2 = BigMod(b,p-1,m);
        return (part1*part2)%m;
    }
}

int main()
{
    long long int b,p,m;
    while(scanf("%lld %lld %lld",&b,&p,&m)!=EOF){
        printf("%lld\n",BigMod(b,p,m));
    }
    return 0;
}

