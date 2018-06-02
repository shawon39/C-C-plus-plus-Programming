/**
1 10
100 200
201 210
900 1000
*/

#include <stdio.h>

long long int abc(long long int x)
{
    if(x==1) return 1;
    else if(x&1) return abc(3*x+1)+1;
    else return abc(x/2)+1;
}

long long int count(long long int a, long long int b)
{
    if(a>b) return count(b,a);8
    long long  x,count=0;
    while(a<=b){
        x = abc(a);
        if(x>count)
        {
            count=x;
        }
        a++;
    }
    return count;
}

int main()
{
    long long int a,b,c;
    while(scanf("%lld%lld",&a,&b)!=EOF){
            c = count(a,b);
        printf("%lld %lld %lld\n",a,b,c);
        ///printf("%lld %lld %lld\n",a,b,count(a,b));
    }
    return 0;
}

