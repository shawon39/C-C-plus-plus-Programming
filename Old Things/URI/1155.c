#include <stdio.h>
int main()
{
    double i,S=0,j;

    for(i=1,j=1; i<=100; i++)
    {
        S = S + j/i;
    }
    printf("%.2lf\n",S);
    return 0;
}
