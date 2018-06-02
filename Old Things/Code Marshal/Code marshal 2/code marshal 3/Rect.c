#include <stdio.h>
#include <math.h>
int main()
{
    int i,T,r,x,y,x1,y1,result;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d%d%d",&r,&x,&y,&x1,&y1);

        result=sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1));

        if(r>result)
        {
            printf("Case %d: YES\n",i);
        }
        else
        {
            printf("Case %d: NO\n",i);
        }
    }
    return 0;
}
