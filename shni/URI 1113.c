#include<stdio.h>
int main()
{
    int i,m,n;
    for(i=0;i<100;i++)
    {
        scanf("%d %d",&m,&n);
        if(m==n)break;
        if(m<n)
        {
            printf("Crescente\n");
        }
        else
        {
          printf("Decrescente\n");

        }
    }
   return 0;
}
