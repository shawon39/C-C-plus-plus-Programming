#include <stdio.h>
int main()
{
    int i,x,n;
    double c,l,num,a,s,t,v;
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {

        scanf("%d",&n);
        num=(double)n;

        if(i==1)
        {
            printf("Case %d: %.2lf\n",i,num/num);
            a=num;
            v=num;
        }
        else
        {

            if(a<num)
            {
                a=num;
                s=a;
            }
            else if(i==2) s=a;

            if(v>num)
            {
                v=num;
                t=v;
            }
            else if(i==2) t=v;

            if(s>t) printf("Case %d: %.2lf\n",i,s/t);
            else printf("Case %d: %.2lf\n",i,t/s);
        }
    }
    return 0;
}
