#include <stdio.h>
int main()
{
    int i,num,t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&num);
        if(num>0)
        {
            for(i=0; i<=num; i++)
            {
                printf("%d ",i);
            }
        }
        else
        {
            for(i=num; i<=0; i++)
            {
                printf("%d ",i);
            }
        }
        printf("\n");

    }
    return 0;
}
