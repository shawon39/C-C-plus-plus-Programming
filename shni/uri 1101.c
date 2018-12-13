#include<stdio.h>
int main()
{
    int i,sum,m,n,j,temp;
    for(i=0;i<100;i++)
    {
        sum =0;
    scanf("%d %d",&m,&n);
    if(m<=0 || n<=0)break;
    if(m>n)
    {
        temp = m;
        m = n;
        n = temp;
    }
    for(j=m;j<=n;j++)
    {
          sum=sum+j;
        printf("%d ",j);
    }
    printf("Sum=%d\n",sum);
    }
    return 0;
}
