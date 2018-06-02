#include <stdio.h>
int i,sum=0,count=0,a,b;

int main()
{
    scanf("%d",&a);
    while(1)
    {
        scanf("%d",&b);
        if(b>a) break;
    }
    for(i=a; i<=b; i++)
    {
        count++;
        sum=sum+i;
        if(sum>b) break;
    }
    printf("%d\n",count);
    return 0;
}
