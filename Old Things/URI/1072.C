#include <stdio.h>
int main()
{
    int T,num,count,count1;
    scanf("%d",&T);
    count=0;
    count1=0;
    while(T--)
    {

        scanf("%d",&num);

        if(num>=10 && num<=20) count+=1;
        else count1+=1;
    }
    printf("%d in\n%d out\n",count,count1);

    return 0;
}
