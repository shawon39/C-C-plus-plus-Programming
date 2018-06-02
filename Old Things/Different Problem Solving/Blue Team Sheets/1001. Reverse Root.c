#include <stdio.h>
#include <math.h>

double num,num2[10000];

int main()
{
    int i=0;
    while(scanf("%lf",&num)!=EOF)
    {
        num2[i]=sqrt(num);
        i++;
    }

    while(i--)
    {
        printf("%.4lf\n",num2[i]);
    }
    return 0;
}
