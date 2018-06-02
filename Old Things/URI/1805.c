#include <stdio.h>
int main()
{
    unsigned long long int a,b,c,d;
    scanf("%llu%llu",&a,&b);
    c=(b-a)+1;
    d=(a+b)*c/2;
    printf("%llu\n",d);
    return 0;
}
