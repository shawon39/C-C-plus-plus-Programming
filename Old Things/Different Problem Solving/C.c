#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=1,i,j,T,array[15][15],m,n,N;
    scanf("%d",&T);
    while(T--)
    {
        int count=0,lol=0;
        scanf("%d",&N);
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                scanf("%d",&array[i][j]);
            }
        }

        if( N==5 )
        {
            for(n=0,m=0; m<N; m++)
            {

                if( (array[n][m]!=array[n][m+1] ) && (array[n+1][m]!=array[n+1][m+1] ))
                {
                    count++;
                }
                if(m==4)
                {
                    if(count==4)
                    {
                        lol++;
                        count=0;
                    }
                    m=0;
                    n++;
                    if(n==4) break;
                }
            }
            if(lol==0) printf("Case %d: %d\n",k++,0);
            else printf("Case %d: %d\n",k++,lol*2);

        }

        else
        {
            if( N==10 )
            {
                for(n=0,m=0; m<N-1; m++)
                {
                    if(array[n][m]!=array[n][m+1])
                    {
                        count++;
                        //printf("%d\n",count);
                    }
                    if(m==9)
                    {
                        if(count==9)
                        {
                            lol++;
                            count=0;
                        }
                        m=0;
                        n++;
                        if(n==9) break;
                    }
                }
                if(lol==0) printf("Case %d: %d\n",k++,0);
                else printf("Case %d: %d\n",k++,lol);
            }
            else
            {
                printf("Case %d: %d\n",k++,0);
            }
        }
    }
    return 0;
}

