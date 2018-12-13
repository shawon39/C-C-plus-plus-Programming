#include<stdio.h>
int main()
{
    int i,j,n,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
       int k =0;
       if(n==1 || n==2)
       {
           printf("%d eh primo\n",n);
       }
        for(j=2; j<n; j++)
        {
            if(n%j==0)
            {
                k=1;
                break;

            }
            else
            {
                k=2;

            }

        }
        if (k==1)
            printf("%d nao eh primo\n",n);
        else if(k==2)
        printf("%d eh primo\n",n);

    }
    return 0;
}
