#include <stdio.h>
int main()
{
    double x,d=0,k=0,m;

    while(1)
    {
        scanf("%lf",&x);
        if(x<0 || x>10)
        {
            printf("nota invalida\n");
        }
        else
        {
            d+=1;
            k+=x;
            if(d==2)
            {
                m = k/2;
                printf("media = %.2lf\n",m);
                break;
            }
        }

    }
    return 0;
}
