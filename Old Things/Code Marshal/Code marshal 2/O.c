#include <stdio.h>
int main()
{
    int num, i,Prime;
    int j,T;
    scanf("%d",&T);
    for(j=1; j<=T; j++)
    {
        Prime=0;
        scanf("%d",&num);

        for(i = 2; i<num; i++)
        {
            if(num%i==0)
            {
                Prime=1;
                break;
            }
        }

        if(Prime==0)
        {
            printf("Case %d: YES\n",j);
        }
        else
        {
            printf("Case %d: NO\n",j);
        }
    }
    return 0;
}
