#include <stdio.h>
int main()
{
    long long i,num;

    scanf("%lld",&num);

        for(i=2; i<=num; i+=2)
        {
            printf("%lld^2 = %lld\n",i,i*i);
        }

    return 0;

}
