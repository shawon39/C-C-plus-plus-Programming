#include<stdio.h>
int main()
{
    int n,array[12],i,j,k,l,m,p,o,ct=0;

    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;

        if(ct==1) printf("\n");
        else ct = 1;

        for(i=1; i<=n; i++)
        {
            scanf("%d",&array[i]);

        }
        for(j=1; j<=n-5; j++)
        {
            for(k=j+1; k<=n-4; k++)
            {
                for(l=k+1; l<=n-3; l++)
                {
                    for(m=l+1; m<=n-2; m++)
                    {
                        for(p=m+1; p<=n-1; p++)
                        {
                            for(o=p+1; o<=n; o++)
                            {
                                printf("%d %d %d %d %d %d\n",array[j],array[k],array[l],array[m],array[p],array[o]);
                            }
                        }

                    }
                }
            }
        }

    }
    return 0;
}
