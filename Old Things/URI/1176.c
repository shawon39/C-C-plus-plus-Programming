#include <stdio.h>
int main()
{
    long long int c,a,b,n,i;
    int T;
    scanf("%d",&T);

    while(T--)
    {
        a=0,b=1;
        scanf("%lld",&n);

        if(n==0)
        {
            printf("Fib(%lld) = 0\n",n);
            continue;
        }

        else if(n==1)
        {
            printf("Fib(%lld) = 1\n",n);
            continue;
        }


        for(i=2; i<=n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fib(%lld) = %lld\n",n,c);
    }

    return 0;

}
