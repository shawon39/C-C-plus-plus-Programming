#include<stdio.h>
int main()
{
    int i,n,t,j,k;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        int sum = 0;
        scanf("%d",&n);

        for(j=1; j<n; j++)
        {
            if(n%j==0)
                sum = sum +j;
            k = sum;
        }
         if(k == n)printf("%d eh perfeito\n",n);
        else if(k!=n) printf("%d nao eh perfeito\n",n);


    }
    return 0;
}
