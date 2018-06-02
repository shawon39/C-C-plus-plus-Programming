#include <stdio.h>
int main()
{
    int i,t,count,marks,n,num,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        count=0,marks=0;
        for(j=1; j<=n; j++)
        {
            scanf("%d",&num);
            if(marks<=num)
            {
                if(marks==num)
                {
                    count=count+1;
                }
                marks=num;

            }
        }
        printf("Case %d: %d %d\n",i,marks,count+1);
    }
    return 0;
}
