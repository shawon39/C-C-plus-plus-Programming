#include <stdio.h>
int main()
{
    int a,N,i,sum=0;
    scanf("%d%d",&a,&N);
    while(N<=0)
        scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        sum=sum+a;
        a++;
    }
    printf("%d\n",sum);
    return 0;
}
