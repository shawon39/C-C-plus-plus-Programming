#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,N,m,ct,array[110][110],sum=0,n,count,f;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    m=0,count=0,ct=0,k=0,f=0;
    while(m>=0)
    {
        n = m;
        for(j=k; j<=m; j++)
        {
            printf("%d ",array[n][j]);
            n--;
            count++;
        }
        ct++;
        if(ct<N)
        {
            m++;
        }
        else
        {
            k++;
        }
        if(count == N*N) break;
    }
    return 0;
}
