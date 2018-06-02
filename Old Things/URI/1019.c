#include <stdio.h>
int main()
{
    int n,a,b,h,s,m;
    scanf("%d",&n);

    h=n/3600;
    b=n%3600;
    m=b/60;
    s=b%60;

    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
