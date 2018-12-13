#include<stdio.h>
int main()
{
    int i,a,test,k=0,t=0,m=0,n=0,sum=0;
    char c;
    double x,y,z;
     scanf("%d",&test);
     for(i=0;i<test;i++)
     {
         scanf("%d %c",&a,&c);
         sum = sum+a;
         if(c=='C')
         {
            m = m+a;

         }

         else if(c=='R')
         {
             t = t+a;
         }
         else if(c=='S')
         {
             n = n+a;
         }
     }
     printf("Total: %d cobaias\n",sum);
     printf("Total de coelhos: %d\n",m);
     printf("Total de ratos: %d\n",t);
     printf("Total de sapos: %d\n",n);
      printf("Percentual de coelhos: %.2lf %%\n",(m*100.00)/sum);
     printf("Percentual de ratos: %.2lf %%\n",(t*100.00)/sum);
     printf("Percentual de sapos: %.2lf %%\n",(n*100.00)/sum);
}
