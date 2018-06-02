#include <stdio.h>
#include <math.h>
#define PI acos(0.0)*2

int main()
{
    int n;
    double R, r, d;
    scanf("%lf %d", &R, &n);
    d = sin(PI/n);
    printf("%lf",d);
    r = (d * R) / (d+1);
    printf("%.10lf ",r);
    return 0;
}
