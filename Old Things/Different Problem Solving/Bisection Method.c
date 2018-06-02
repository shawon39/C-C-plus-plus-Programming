#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    double a,b,fa,fb,m,X[100],F[100];
    int k;
    char function[100];

    printf("Equation: x*x-4x-10\n");
    printf("Enter the value of a and b: ");
    scanf("%lf %lf", &a,&b);
    printf("\n");
    k = 1;

    while(1)
    {
        X[k] = (a+b)/2;

        fa = a * a - 4*a - 10;
        fb = b * b - 4*b - 10;

        F[k] = X[k] * X[k] - 4*X[k] - 10;
        printf("%d. -->  x = %.4lf  & F(x) = %.4lf\n",k, X[k], F[k]);

        m = X[k]-X[k-1];

        if(m<0)
        {
            m = fabs(X[k]-X[k-1]);
        }

        if( m >= 0.0001 && m <= 0.001)
        {
            printf("\nRoot = %.4lf\n", X[k]);
            break;
        }
        else if (F[k] < 0)
        {
            b = X[k];
        }
        else if (F[k] > 0)
        {
            a = X[k];
        }
        k++;

    }
    return 0;

}

