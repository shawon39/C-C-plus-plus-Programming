#include <stdio.h>
int main()
{
    double u,a,t,S;
    scanf("%lf %lf %lf",&u,&a,&t);
    S=(u*t)+(0.5*a*t*t);
    printf("%.2lf\n",S);
    return 0;
}
