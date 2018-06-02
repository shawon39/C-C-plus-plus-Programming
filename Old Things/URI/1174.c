#include <stdio.h>
int main()
{
    double ar[100];
    int i;

    for(i=0; i<100; i++)
    {
        scanf("%lf",&ar[i]);

        if(ar[i]<=10) printf("A[%d] = %.1lf\n",i,ar[i]);
    }
    return 0;
}
