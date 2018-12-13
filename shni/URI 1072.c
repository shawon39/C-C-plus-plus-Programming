#include<stdio.h>
int main()
{
  int i,a,j=0,m=0,test;
   scanf("%d",&test);
   for(i=0;i<test;i++)
   {
       scanf("%d",&a);
       if(a>=10 && a<=20)j++;
       else m++;
   }
   printf("%d in\n",j);
   printf("%d out\n",m);
   return 0;
}
