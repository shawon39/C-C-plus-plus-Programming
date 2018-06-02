#include <stdio.h>
int main()
{
    int i,T,num,a,s,r=10;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        a=0;
        scanf("%d",&num);
        if(num<=10)
        {
            printf("%d %d\n",a,num);
        }
        else
        {
            if(num<=20)
            {
                s=num-10;
                printf("%d %d\n",r,s);
            }
        }
    }
    return 0;
}
