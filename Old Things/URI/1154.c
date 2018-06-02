#include <stdio.h>
int main()
{
    double n,count=0,age=0;

    while(1)
    {
        scanf("%lf",&n);
        if(n<0) break;
        else
        {
            age = age + n;
            count+=1;
        }
    }
    printf("%.2lf\n",age/count);
    return 0;
}
