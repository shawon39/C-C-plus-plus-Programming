#include <stdio.h>
int main()
{
    int i,T,num;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&num);
        if(num%3==0)
        {
            printf("%d is divisible by 3\n",num);
            if(num%7==0)
            {
                printf("%d is also divisible by 7\n",num);
            }
        }
        else
        {
            printf("%d is not divisible by 3\n",num);
        }
    }
    return 0;
}
