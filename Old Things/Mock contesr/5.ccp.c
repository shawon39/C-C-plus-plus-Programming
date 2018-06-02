#include <stdio.h>
int main()
{
    int i,x,n;
    double c,l,num,a,s,t;
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {

        scanf("%d",&n);
        num=(double)n;

        if(i==1)
        {
            printf("Case %d: %.2lf\n",i,num/num);
            a=num;
        }
        else
        {

            if(a<num)
            {
                s=num;
                a=s;
            }
            else
            {
                s=a;
            }

            if(a>num)
            {
                t=num;
            }

            printf("Case %d: %.2lf\n",i,s/t);
        }
    }
    return 0;
}

