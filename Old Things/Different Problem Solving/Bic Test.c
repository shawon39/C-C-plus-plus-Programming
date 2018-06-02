#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    double a,b,q,w,m,n[100],i[100];
    int k;
    char function[100];

    printf("Equation: x*x-4x-10\n");
    printf("\n");
    printf("Enter the value of a = ");
    scanf("%lf",&a);
    printf("\n");
    printf("Enter the value of b = ");
    scanf("%lf",&b);
    printf("\n");
    k = 1;
    printf("Iteration    Value of X    Value of f(x)\n");
    while(1)
    {
        n[k] = (a+b)/2;

        q = a * a - 4*a - 10;
        w = b * b - 4*b - 10;

        i[k] = n[k] * n[k] - 4*n[k] - 10;
        printf("   %d        %.4lf        %.4lf\n",k, n[k], i[k]);

        m = n[k]-n[k-1];

        if(m<0)
        {
            m = fabs(n[k]-n[k-1]);
        }

        if( m >= 0.0001 && m <= 0.001)
        {
            printf("\nRoot = %.4lf\n", n[k]);
            break;
        }
        else if (i[k] < 0)
        {
            b = n[k];
        }
        else if (i[k] > 0)
        {
            a = n[k];
        }
        k++;

    }
    return 0;

}


