#include<stdio.h>
int main()
{
    int i,j,n,c;
    double array[12][12],avg,sum=0;
    char x[2];
    scanf ("%d",&n);
    scanf("%s",&x);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {

            scanf("%lf",&array[i][j]);

        }
    }
    for(i=n; i<=n; i++)
    {
        for(j=0; j<12; j++){
            sum = sum + array[i][j];
            avg = sum/12.0;
    }

    }
    if(x[0]=='S')
    {
        printf("%.1lf\n",sum);
    }

     else if(x[0]='M')
     {
         printf("%.1lf\n",avg);
     }

return 0;
}
