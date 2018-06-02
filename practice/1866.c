#include <stdio.h>
int main()
{
    int t,i,n,s;
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            if(n%2==0) s=0;
            else s=1;
        }
        printf("%d\n",s);
    }
    return 0;
}
