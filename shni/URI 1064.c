#include<stdio.h>
int main()
{
    int k,i,j=0;
double a,sum=0;
   for(i=0;i<6;i++)
   {

       scanf("%lf",&a);
       if(a>0)
       {
          sum = sum + a;
           j++;
       }

   }


printf("%d valores positivos\n",j);
printf("%.1lf\n",(sum/j));
return 0;

}
