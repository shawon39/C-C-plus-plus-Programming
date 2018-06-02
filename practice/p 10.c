#include<stdio.h>
int main()
{
    int T,p,m,n,i,j,a,b;
    scanf("%d",&T);
    for(p=1;p<=T;p++)
    {
        scanf("%d%d",&m,&n);
        a=0;
        b=1;
        for(i=1;i<=m;i++)
        {
            if(i%2!=0)
            {
                for(j=1;j<=5;j++)
                {
                    if(i==m && j==n)
                    {
                        printf("Case #%d: %d\n",p,a);
                        break;
                    }
                    a+=2;
                }
            }
            else
            {
                for(j=1;j<=5;j++)
                {
                    if(i==m && j==n)
                    {
                        printf("Case #%d: %d\n",p,b);
                        break;
                    }
                    b+=2;
                }
            }
        }
    }
    return 0;
}
