#include <stdio.h>
int main()
{
    int i,T,j,x,y;
    long long int a,b,z,result;

    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {

        a=1,b=1;
        scanf("%d%d",&x,&y);

        z = x-y;
        for(j=1; j<=x; j++)
        {
            a = a * j;
        }

        for(j=1; j<=z; j++)
        {
            b = b * j;
        }
        result = a / b;

        printf("Case %d: %lld\n",i,result);
    }
    return 0;
}
