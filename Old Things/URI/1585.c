#include <stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%i%i",&a,&b);
        printf("%d cm2\n",a*b/2);
    }
    return 0;
}
