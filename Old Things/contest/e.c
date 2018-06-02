#include<stdio.h>
int main()
{
    int t,a,b,c,d,x,y,n,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        printf("Case %d:\n",i);
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&n);
        while(n--)
        {
            scanf("%d %d",&x,&y);
            if(x>=a &&x <=c)
            {
                if(y>=b && y<=d) printf("Yes\n");
                else printf("No\n");
            }
            else printf("No\n");
        }
    }
    return 0;
}
