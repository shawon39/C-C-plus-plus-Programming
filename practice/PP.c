#include<stdio.h>
int main()
{
    int T,i,j,N;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        for(j=0; j<N; j++)
        {
            if(j==0)
            {
                printf("*********");
            }
            else
            {
                printf(" *********");
            }
        }
        printf("\n");

        for(j=0; j<N; j++)
        {
            if(j==0)
            {
                printf("*       *");
            }
            else
            {
                printf(" *       *");
            }
        }
        printf("\n");

        for(j=0; j<N; j++)
        {
            if(j==0)
            {
                printf("*       *");
            }
            else
            {
                printf(" *       *");
            }
        }
        printf("\n");

        for(j=0; j<N; j++)
        {
            if(j==0)
            {
                printf("*********");
            }
            else
            {
                printf(" *********");
            }
        }
        printf("\n");

    }
    return 0;
}
