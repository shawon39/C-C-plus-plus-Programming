#include <stdio.h>
int main()
{
    int i,num;

    while(1)
    {
        scanf("%d",&num);
        if(num<=0)
        {
            return 0;
        }

        else
        {
            for(i=1; i<=num; i++)
            {
                if(i==1) printf("%d",i);
                else printf(" %d",i);
            }
            printf("\n");
        }
    }
    return 0;
}
