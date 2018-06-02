#include <stdio.h>
#include <math.h>
#define pi 2*acos(0.0)
int main()
{
    double r,result;
    int i,T;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {

        scanf("%lf",&r);
        result= (2*r)*(2*r)-(pi*r*r);
        printf("Case %d: %0.2lf\n",i,result);
    }
    return 0;
}
