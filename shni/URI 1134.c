#include<stdio.h>
int main()
{
    int i,m,a=0,g=0,d=0;
    for(i=0; i<100; i++)
    {

        scanf("%d",&m);
        if(m==4)
        {
            break;
        }
        else if(m==1)
        {
            a++;
        }
        else if(m==2)
        {
            g++;
        }
       else if(m==3)
        {
            d++;
        }

    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
    return 0;
}
