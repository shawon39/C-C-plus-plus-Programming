#include <stdio.h>
int main()
{
    double A,B,C,S;

    scanf("%lf %lf %lf",&A, &B, &C);

    if((0<A) &&(0<B) && (0<C))
    {

        if(A >= B + C || B >= A + C  || C >= A + B) printf("NAO FORMA TRIANGULO\n");

        else if(A*A == B*B + C*C || B*B == A*A + C*C || C*C == B*B + A*A) printf("TRIANGULO RETANGULO\n");

        else if(A*A > B*B + C*C ||  B*B > A*A + C*C || C*C > B*B + A*A ) printf("TRIANGULO OBTUSANGULO\n");

        else if(A*A < B*B + C*C ||  B*B < A*A + C*C || C*C < B*B + A*A ) printf("TRIANGULO ACUTANGULO\n");

        if(A==B && B==C) printf("TRIANGULO EQUILATERO\n");

        else if ( A==B && A!=C || B==C && B!=A || C==A && A!=B ) printf("TRIANGULO ISOSCELES\n");

    }

    return 0;
}
