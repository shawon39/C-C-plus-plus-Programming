#include <stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    if(num>0)
    {
        for(int i=1; i<=num; i++)
        {
            sum=sum+i;
        }
    }
    else
    {
        for(int i=num; i<=1; i++)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
