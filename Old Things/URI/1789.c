#include <stdio.h>
int main()
{
    int x,i,n[500],a,mx;
    while(scanf("%d",&x)!=EOF)
    {
        mx=0;
        for(i=0; i<x; i++)
        {
            scanf("%d",&n[i]);
        }
        for(i=0; i<x; i++)
        {
            if(n[i]>mx)
            {
                mx = n[i];
            }
        }
        if(mx>=20)
        {
            a=3;
        }
        else if(mx>=10 && mx<20)
        {
            a=2;
        }
        else
        {
            a=1;
        }
        printf("%d\n",a);
    }
    return 0;
}


