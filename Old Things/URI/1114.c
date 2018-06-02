#include <stdio.h>
int main()
{
    int num;

    while(1)
    {
        scanf("%d",&num);
        if(num==2002)
        {
            printf("Acesso Permitido\n");
            return 0;

        }
        else
        {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}

