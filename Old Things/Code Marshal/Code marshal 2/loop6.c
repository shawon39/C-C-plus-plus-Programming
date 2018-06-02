#include <stdio.h>
int main()
{
    int start,diff,end,n,sum=0;
    scanf("%d%d%d",&start,&diff,&end);
    for(n=start; n<=end; n=n+diff)
    {
        sum = sum + n;
    }
    printf("%d \n",sum);
}
