#include <stdio.h>
int main()
{
    int array[50][50];
    int T,i,j,x;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d", &x);
        for(i=0; i<x; i++)
        {
            for(j=0; j<x; j++)
            {
                scanf("%d", &array[i][j]);
            }
        }

        for(i=x-1; i>=0; i--)
        {
            for(j=x-1; j>=0; j--)
            {
               if(j==x-1 && i==x-1) printf("%d", array[i][j]);

                else printf(" %d", array[i][j]);
            }
        }

        printf("\n");
    }

    return 0;
}
