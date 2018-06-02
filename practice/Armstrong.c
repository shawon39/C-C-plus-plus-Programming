#include <stdio.h>
int main()
{
    int num,temp,r,sum=0;
    scanf("%d",&num);
    temp=num;

    while(num!=0)
    {
        r=num%10;
        num=num/10;
        sum=sum+r*r*r;
    }
    if(sum==temp) printf("Armstrong\n");
    else printf("Not Armstrong\n");
    return 0;
}
