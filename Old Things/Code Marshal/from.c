#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    for(m; m<=n; m++)
    {
        if(m<n)
        {
            printf("%d ",m);
        }
        else
        {
            printf("%d\n",m);
        }
    }
    return 0;
}
