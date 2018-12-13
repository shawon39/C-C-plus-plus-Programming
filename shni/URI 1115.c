#include<stdio.h>
int main()
{
    int i,m,n;
    for(i=0; i<100; i++)
    {
        scanf("%d %d",&m,&n);
        if(m>0 && n>0)
        {
            printf("primeiro\n");
        }
        else if(m<0 && n>0)
        {
            printf("segundo\n");
        }
        else if(m<0 && n<0)
        {
            printf("terceiro\n");
        }
        else if(m>0 && n<0)
        {
            printf("quarto\n");
        }
        else if(m==0 || n==0)break;
    }
return 0;
}
