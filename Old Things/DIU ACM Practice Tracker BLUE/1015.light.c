#include <stdio.h>
int main()
{
    int i,T,N,sum,num;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        sum=0;
        scanf("%d",&N);
        while(N--)
        {
            scanf("%d",&num);
            if(num>0 && num<=99)
            {
                 sum=sum+num;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
