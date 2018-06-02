#include <stdio.h>
int main()
{
    int x,i,sum;

    while(1)
    {

        sum =0;
        scanf("%d",&x);

        if(x==0) break;

        if(x%2==1 || x%2==-1) x++;

        for(i=1; i<=5; i++)
        {
            sum = sum + x;
            x+=2;
        }
        printf("%d\n",sum);
    }
    return 0;
}

