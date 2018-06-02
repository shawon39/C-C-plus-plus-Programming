#include <stdio.h>
int main()
{
    int a,b,i,sum;

    while(1)
    {

        sum =0;
        scanf("%d %d",&a, &b);
        if(a<=0 || b<=0) break;
        if(a<b)
        {
            for(i=a; i<=b; i++)
            {
                sum = sum + i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }
        else
        {
            for(i=b; i<=a; i++)
            {
                sum = sum + i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }
    }
    return 0;
}
