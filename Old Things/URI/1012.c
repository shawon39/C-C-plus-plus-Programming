#include <stdio.h>
int main()
{
    double A,B,C,m,n,k,x,y;
    scanf("%lf%lf%lf",&A,&B,&C);
    m = ( 0.5 * A * C );
    n = ( 3.14159 * C * C );
    k = ( 0.5 * ( A + B) * C );
    x = ( B * B );
    y = ( A * B );
    printf("TRIANGULO: %0.3lf\n",m);
    printf("CIRCULO: %0.3lf\n",n);
    printf("TRAPEZIO: %0.3lf\n",k);
    printf("QUADRADO: %0.3lf\n",x);
    printf("RETANGULO: %0.3lf\n",y);
    return 0;
}
