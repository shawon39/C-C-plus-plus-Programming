#include <stdio.h>
int main()
{
    int n,num,sum,i;
    scanf("%d",&n);
    while(n--)
    {
        sum=0;
        scanf("%d",&num);

        for(i=1; i<num; i++)
        {
            if(num%i==0)
            {
                sum = sum + i;
            }
        }
        if(sum==num)
        {
            printf("%d eh perfeito\n",num);
        }
        else
        {
            printf("%d nao eh perfeito\n",num);
        }
    }
    return 0;
}
