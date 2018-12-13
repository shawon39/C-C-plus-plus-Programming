#include<stdio.h>
int main()
{
    int m,n,i;
    for(i=0; i<100; i++)
    {
        n = 2002;
        scanf("%d",&m);
        if(m!=n)
        {
            printf("Senha Invalida\n");
        }
        else if(m==n)
        {
            printf("Acesso Permitido\n");
            break;
        }
    }

    return 0;
}
