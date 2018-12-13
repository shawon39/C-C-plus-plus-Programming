#include<stdio.h>
int main()
{
    int i,j;
    float array[12][12],p=0,sum=0,avg,k=11,m=11;
    char x[2];
    scanf("%s",&x);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f",&array[i][j]);
        }
    }
    for(i=1;i<=10;i++)
     {
          if (i==1)
        {
            m=11;
        }
         if (i>=2 && i<=5)
        {
            m--;
        }
         if(i==6)
         {
             m=7;
         }
         if (i>=7 && i<=10)
        {
            m++;
        }

       for(j=k;j>=m;j--)
         {
             p++;
                sum = sum+array[i][j];
         }


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











