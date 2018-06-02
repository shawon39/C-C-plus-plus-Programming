#include <stdio.h>
int main()
{
    double num,n;
    int i=0;

    scanf("%lf",&num);

    for(i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n",i,num);
        num = num/2;
    }

    return 0;
}
