#include<stdio.h>
int main()
{
    int i,x,y,temp,sum=0;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        temp =  x;
        x = y;
        y = temp;
    }
    if(x%2==0)
    {
        for(i=x+1; i<y; i=i+2)

        {
            sum = sum+i;
        }
    }
    else if(x%2!=0)
    {
        for(i=x+2; i<y; i=i+2)
        {
            sum = sum+i;
        }
    }
    printf("%d\n",sum);
}
