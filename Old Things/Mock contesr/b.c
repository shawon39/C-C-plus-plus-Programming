#include <stdio.h>
int main()
{
    int t,r,a,b,i,n,m,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        m=0,n=0;
        scanf("%d",&r);
        for(j=2; j<=r; j++)
        {
            scanf("%d%d",&a,&b);
            m=m+(a-b);
            if(m>n)
            {
                n=m;
            }
        }
        printf("Case %d: %d\n",i,n);
    }
    return 0;
}
