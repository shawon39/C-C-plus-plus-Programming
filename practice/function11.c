#include <stdio.h>
int main()
{
    int x,count,n=0,i,y;

    scanf("%d%d",&x,&y);
    for(i=x; i<=y; i++)
    {
        count=0;
        while(1)
        {
            count++;
            if(i==1) break;
            else if(i%2==1) i = 3*i+1;
            else  i = i/2;
        }
        if(count>=n)
        {
            n=count;
        }
    }
    printf("Length: %d\n",n);

    return 0;
}
/**
1 10
100 200
201 210
900 1000
*/
