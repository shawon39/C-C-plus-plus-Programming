#include<stdio.h>
int main()
{
    int i,j;
    float array[12][12],p=0,sum=0,avg,k=1;
    char x[2];
    scanf("%s",&x);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f",&array[i][j]);
        }
    }
    for(i=11;i>=1;i--)
     {
       for(j=k;j<=11;j++)
         {
             p++;
                sum = sum+array[i][j];
         }
         k++;
     }
    avg  = sum/p;

if (x[0]=='S')
{
    printf("%.1f\n",sum);
}
if (x[0]=='M')
{
    printf("%.1f\n",avg);
}
return 0;
}











