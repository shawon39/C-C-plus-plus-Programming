#include<stdio.h>
int main()
{
    int x,z,a=1,i,n,sum=0;
    scanf("%d %d",&x,&z);
    while(z<=x)
    {
        scanf("%d",&z);
    }

    for(i=x; i<=z; i++)
    {
        sum = sum +i;
        if(sum > z)break;
        a++;
    }

    printf("%d\n",a);

}
