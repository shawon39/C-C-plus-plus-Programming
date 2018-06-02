#include <stdio.h>
int main()
{
    int t,i,j,xx;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        scanf("%d",&xx);

        for(j=0; j<=xx; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

