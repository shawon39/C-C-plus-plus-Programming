#include <stdio.h>
int main()
{
    int i,t;
    long long int a,b;
    char ch;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %c",&a,&b,&ch);

        if(ch=='+') printf("Case %d: %lld\n",i,a+b);
        if(ch=='-') printf("Case %d: %lld\n",i,a-b);
        if(ch=='%') printf("Case %d: %lld\n",i,a%b);
        if(ch=='/') printf("Case %d: %lld\n",i,a/b);
        if(ch=='*') printf("Case %d: %lld\n",i,a*b);
    }

    return 0;
}
