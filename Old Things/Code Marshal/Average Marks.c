#include <stdio.h>
int main()
{
    int T,num,i,sum,count,n,k=0;
    scanf("%d",&T);
    while(T--)
    {
        sum=0,count=0;
        scanf("%d",&num);
        for(i=1; i<=num; i++)
        {
            scanf("%d",&n);
            sum = sum + n;
            count+=1;
        }

        printf("Case %d: %d\n",++k,sum/count);
    }
    return 0;
}
