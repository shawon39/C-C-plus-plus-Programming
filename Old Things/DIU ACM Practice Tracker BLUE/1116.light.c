#include <stdio.h>
int main()
{
    int num,i,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&num);
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                if(i%2==1)
                {
                    printf("%d",i);
                }
            }
        }
    }
}
