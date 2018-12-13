#include<stdio.h>
int main()
{
    int n,i,j;
    float array[12][12],sum =0,avg;
    char y[2] ;
       scanf("%d",&n);
    scanf("%s",&y);
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%f",&array[i][j]);
        }
    }
for(i=0;i<4;i++)
{
    for(j=n;j<=n;j++)
    {

        sum = sum + array[i][j];
        avg = sum/4.0;
    }

}

     if (y[0] == 'S')
     {
         printf("%.1f\n",sum);
     }
     else if (y[0] == 'M')
     {
printf("%.1f\n",avg);

     }
return 0;
}
