#include <stdio.h>
int main()
{
    int a;

   while(scanf("%d",&a) != EOF)
   {
       if(a==42)
       {
           break;
       }
       printf("%d\n",a);
   }
   return 0;
}
