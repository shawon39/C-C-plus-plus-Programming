#include<stdio.h>
int main()
{
   int a,b,c,n,d,e,m=1;
   while(1)

   {
       scanf("%d %d %d",&a,&b,&c);
       if(a==0)break;
       d = a * b ;
       e = (d*100)/c;
      // printf("%d",e);
       for(m=1;m*m<=e;m++)

         {

         }
         m--;
printf("%d\n",m);

   }

return 0;
}
