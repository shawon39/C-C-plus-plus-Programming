#include<stdio.h>
int main()
{
    int i,n,j,p,b=1,c=1;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        return 0;
        b=1; c=1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            if(n==1)
            printf("%d ",n);
            else
            {
                printf("%d ",b);

                b*=2;
            }
            printf("\n");
          c*=2;
          b=c;
    }
    printf("\n");
    }
}
