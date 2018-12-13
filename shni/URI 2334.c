#include<stdio.h>
int main()
{
   long long int a;
    while(1)
    {
        scanf("%lld",&a);
        if(a==-1)break;
        if(a==0)printf("%lld\n",a);
        else
        printf("ll%d\n",a-1);
    }
    return 0;
}
