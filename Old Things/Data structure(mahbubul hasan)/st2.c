#include <stdio.h>
int main()
{
    int i,j,n,m,count=0,ar[40000];
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<=m; j++)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
