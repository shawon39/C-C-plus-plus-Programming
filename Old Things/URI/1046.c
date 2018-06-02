#include <stdio.h>
int main()
{
    int start,end;

    scanf("%d %d",&start, &end);

    if(end==start)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        if(end>start)
        {
            printf("O JOGO DUROU %d HORA(S)\n",end-start);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S)\n",(24-start)+end);
        }
    }

    return 0;
}
