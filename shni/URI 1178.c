#include<stdio.h>
int main()
{
    int i;
    double n,array[100];
    scanf("%lf",&n);
    for(i=0;i<=100;i++)

    {
        array[i] = n;
        n = (n/2.0);
        printf("N[%d] = %.4lf\n",i,array[i]);

    }
return 0;
}
