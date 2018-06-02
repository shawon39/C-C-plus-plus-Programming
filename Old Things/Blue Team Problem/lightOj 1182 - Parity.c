#include <stdio.h>
int main()
{
    int i=1,T,n,count;
    scanf("%d",&T);
    while(T--)
    {
        count=0;
        scanf("%d",&n);
        while(n>=0)
        {
            if(n%2==1) count++;
            n = n/2;
            if(n==0) break;
        }
        if(count%2==0) printf("Case %d: even\n",i++);
        else printf("Case %d: odd\n",i++);
    }
    return 0;
}
