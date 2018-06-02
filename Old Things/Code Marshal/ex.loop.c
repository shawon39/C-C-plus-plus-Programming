#include <stdio.h>
int main()
{
    int start,end,i,sum=0;
    scanf("%d%d",&start,&end);

    for(i=start;i<=end;i++){

       sum = sum + i;

    }
printf("%d ",sum);
}
