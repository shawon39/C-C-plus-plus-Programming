#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>

using namespace std;

int main(void)
{
    double a,b,fa,fb,m,X[100],F[100];
    int i,k,len,p=0,q=0,r=0,ct=0;
    char fun[100],A[10]={0},B[10]={0},S[10];
    cout << "\nSolution By: Shakhawat Hossain\n"
            "ID: 161-15-6953\n"
            "Section: A\n"
            "-------------------------------------------------------\n"
            "Bisection Method:"
            "\n-----------------"
            "\nIt will give you the solution of equation in this format:\nExample: x*x-10x-100\n"
            "Remember: You can't use any space in the equation!\n"
            "And character would be small letter!\n";
    puts("-------------------------------------------------------\n");
    cout << "Enter The Equation: ";
    scanf("%s",&fun);
    len = strlen(fun);
    for(i=0; i<len; i++)
    {
        if(ct==1)
        {
            if(fun[i+1]=='x') ct=2;
        }
        if(fun[i+1] >= '0' && fun[i+1] <= '9' && ct!=2)
        {
            A[p++] = fun[i+1];
            ct=1;
        }
        else if(fun[i+1] >= '0' && fun[i+1] <= '9')
        {
            B[q++] = fun[i+1];
        }

        if(fun[i]=='+' || fun[i]=='-')
        {
            S[r++] = fun[i];
        }

    }

    int r1 = atoi(A);
    int r2 = atoi(B);

    cout << "\nEnter The Value of a and b: ";
    scanf("%lf %lf", &a,&b);
    k = 1;
    puts("");
    while(true)
    {
        X[k] = (a+b)/2;

        if(S[0]=='+' && S[1]=='+')
        {
            F[k] = X[k] * X[k] + r1*X[k] + r2;
        }
        else if(S[0]=='+' && S[1]=='-')
        {
            F[k] = X[k] * X[k] + r1*X[k] - r2;
        }
        else if(S[0]=='-' && S[1]=='+')
        {
            F[k] = X[k] * X[k] - r1*X[k] + r2;
        }
        else if(S[0]=='-' && S[1]=='-')
        {
            F[k] = X[k] * X[k] - r1*X[k] - r2;
        }

        if(k>=10) printf("%d.  X = %.4lf  & F[x] = %.4lf\n",k, X[k], F[k]);
        else printf(" %d.  X = %.4lf  & F[x] = %.4lf\n",k, X[k], F[k]);

        m = X[k]-X[k-1];

        if(m<0)
        {
            m = fabs(X[k]-X[k-1]);
        }

        if( m >= 0.0001 && m <= 0.001)
        {
            printf("\n      Root = %.4lf (%.3lf)\n", X[k],fabs(X[k]-X[k-1]));
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

