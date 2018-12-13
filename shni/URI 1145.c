#include<stdio.h>
int main()
{
    int i,x,y,count=0;
    scanf("%d %d",&x,&y);
    for(i=1; i<=y; i++)
    {

        printf("%d ",i);
        count++;
        if(count==x)
        {
            printf("\n");
            count=0;
        }
    }

    return 0;
}
