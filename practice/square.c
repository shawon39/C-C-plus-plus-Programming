#include <stdio.h>
int main()
{
    int i,t,N,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&N);

        for(i=1; i<=N; i++)
        {
            for(j=1; j<=N; j++)
            {
                if(i==1 || i==N) printf("*");
                else
                {
                    if(j==1 || j==N) printf("*");
                    else printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
