#include <stdio.h>
int main()
{
    int T,x,y,i,sum;
    scanf("%d",&T);
    while(T--)
    {
        sum =0;
        scanf("%d %d",&x,&y);

        if(x%2==0) x++;

        for(i=1; i<=y; i++)
        {
            sum = sum + x;
            x+=2;
        }
        printf("%d\n",sum);
    }
    return 0;
}
