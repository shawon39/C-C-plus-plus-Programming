







Pattern 15
--------------

#include <stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=i; j<=5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}














Pattern 29
--------------

#include <stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(i>j){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}












Pattern 47
--------------

#include <stdio.h>
int main()
{
   int i,j,k,x=7;

   for(i=1; i<=x/2+1; i++)
   {
       for(j=1; j<i; j++)
       {
           printf(" ");
       }
       for(k=x; k>=i*2-1; k--)
       {
           printf("*");
       }
       printf("\n");
   }
   return 0;
}











Pattern 59
--------------

#include <stdio.h>
int main()
{
    int i,j,k,x=5;

    for(i=1; i<=x; i++)
    {
        for(j=x-i; j>=1; j--)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



