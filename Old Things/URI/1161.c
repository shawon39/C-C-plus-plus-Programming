#include <stdio.h>

int fact(a,b)
{
    long long int f1,f2;
    if(a==0) return 1;
    if(b==0) return 1;
    f1= a + fact(a-1);
    f2= b + fact(b-1);
    return f1+f2;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%lld\n",fact(a,b));
    return 0;

}
