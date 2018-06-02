#include <stdio.h>
int main()
{
    int i,t,N,j,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&N);

        for(i=1; i<=N; i++)
        {
            for(j=N-i; j>=0; j--)
            {
                if(N!=N)
                {
                    printf(" ");
                }
            }

            for(k=1; k<=i*2-1; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
