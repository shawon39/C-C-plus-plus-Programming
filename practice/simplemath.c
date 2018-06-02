#include <stdio.h>
int main()
{
    int t,i,j,x,y;
    long long int a,b,z,c;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        a=1,b=1;
        scanf("%d%d",&x,&y);
        if(x>y && x>0 && y>0)
        {
            z = x-y;
            for(j=1; j<=x; j++)
            {
                a = a * j;
            }

            for(j=1; j<=z; j++)
            {
                b = b * j;
            }
            c = a / b;

            printf("Case %d: %lld\n",i,c);
        }
    }
    return 0;
}
