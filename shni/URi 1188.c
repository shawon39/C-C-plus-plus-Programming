
#include<stdio.h>
int main()
{
    int i,j;
    double array[12][12],p=0,sum=0,avg,k=5,m=6;
    char x[2];
    scanf("%s",&x);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&array[i][j]);
        }
    }
    for(i=7;i<=11;i++,k--)
     {
       for(j=k;j<=m;j++)
         {
             p++;
                sum = sum+array[i][j];
         }

         m++;
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











