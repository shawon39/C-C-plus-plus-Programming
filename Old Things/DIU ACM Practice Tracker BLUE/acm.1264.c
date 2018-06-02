#include <stdio.h>
int main()
{
    int n,m,i,j,count=0,count1=0;

    scanf("%d%d",&n,&m);

    for(i=0; i<=n; i++)
    {
        count++;
    }
    for(j=0; j<=m; j++)
        {
            count1++;
        }
    printf("%d\n",count+count1);
    return 0;
}
