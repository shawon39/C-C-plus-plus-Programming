#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
        return n;
        return fib(n-1) + fib(n-2);
}

long long int power (long long int a, long long int b, long long int MOD)
{
    long long int ans=1ll;
    while(b)
    {
        if(b&1)ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b=b/2;
    }
    return ans;
}

int main ()
{
    int i=1,T,n;
    long long int M,result,f,k;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %lld %lld",&n, &k, &M);
        n = n+2;
        f = (long long int) fib(n);
       printf("Case %d: %lld\n",i++,power(k,f,M));
    }
    return 0;
}
