#include <stdio.h>
int main()
{
    int T;
    double n,total=0,Ca=0,Ra=0,Sa=0,p1,p2,p3;
    char ch, chh='%';
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lf %c",&n,&ch);

        total = total + n;

        if(ch=='C')
        {
            Ca+=n;
        }
        if(ch=='R')
        {
            Ra+=n;
        }
        if(ch=='S')
        {
            Sa+=n;
        }
    }
    p1 = (Ca*100)/total;
    p2 = (Ra*100)/total;
    p3 = (Sa*100)/total;

    printf("Total: %.0lf cobaias\n",total);
    printf("Total de coelhos: %.0lf\n",Ca);
    printf("Total de ratos: %.0lf\n",Ra);
    printf("Total de sapos: %.0lf\n",Sa);

    printf("Percentual de coelhos: %.2lf %c\n",p1,chh);
    printf("Percentual de ratos: %.2lf %c\n",p2,chh);
    printf("Percentual de sapos: %.2lf %c\n",p3,chh);

    return 0;
}



