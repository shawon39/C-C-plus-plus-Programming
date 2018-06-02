#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,R1,R2,x;

    scanf("%lf %lf %lf", &a, &b, &c);

    if((b*b) > 4 * a * c && a>0 && b>0 && c>0)
    {
        x = (b*b) - (4 * a * c);

        R1 = ( -b + sqrt(x) )/(2 * a);
        R2 = ( -b - sqrt(x) )/(2 * a);

        printf("R1 = %0.5lf\nR2 = %0.5lf\n",R1, R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}
