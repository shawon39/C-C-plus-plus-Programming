#include <stdio.h>
int main()
{
    int i,a,b,count=0;
    scanf("%d %d", &a, &b);

    if(a<b)
    {
        for(i=a; i<=b; i++)
        {
            if(i%13!=0)
            {
                count=count+i;
            }
        }
        printf("%d\n",count);
    }
    else
    {
        for(i=b; i<=a; i++)
        {
            if(i%13!=0)
            {
                count=count+i;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
