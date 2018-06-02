#include <stdio.h>
int main()
{
    double i,S=0,j,k;

    for(i=1,j=1,k=1; i<=39; i+=2,j*=2)
    {
        if(S==0) S = S + i/k;
        else S = S + i/j;
    }
    printf("%.2lf\n",S);
    return 0;
}
