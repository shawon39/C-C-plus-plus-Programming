#include <stdio.h>
int main()
{
    int n,p,q,i,j,k,m,count,t,sum,arry[35];
    scanf("%d",&t);
    for(m=1; m<=t; m++)
    {
        scanf("%d %d %d",&n,&p,&q);
        for(i = 0; i < n; i++)
        {
            scanf("%d",&arry[i]);
        }
        sum = 0;
        count = 0;
        for(i = 0; i < n; i++)
        {
            sum += arry[i];
            if(sum > q || count >= p)
                break;
            count++;
        }
        printf("Case %d: %d\n",m,count);
    }
    return 0;
}
