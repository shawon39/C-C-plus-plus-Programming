#include <stdio.h>
int main()
{
    int t,count;
    double i,fd;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%lf",&fd);
        for(i=fd; i>1; i/=2)
        {
            count++;
        }
        printf("%d dias\n",count);
    }
    return 0;
}
