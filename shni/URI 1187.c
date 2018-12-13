
#include<stdio.h>
int main()
{
    int i,j;
    double array[12][12],p=0,sum=0,avg,k=1,m=10;
    char x[2];
    scanf("%s",&x);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&array[i][j]);
        }
    }
    for(i=0;i<=4;i++,k=i+1)
     {
       for(j=k;j<=m;j++)
         {
             p++;
                sum = sum+array[i][j];
         }

         m--;
     }
    avg  = sum/p;

if (x[0]=='S')
{
    printf("%.1lf\n",sum);
}
if (x[0]=='M')
{
    printf("%.1lf\n",avg);
}
return 0;
}











