#include <stdio.h>
#include <math.h>
int main()
{
    int i,T;
    double a,b,c,r,x,y,x1,y1,result;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%lf %lf %lf %lf %lf",&x,&y,&r,&x1,&y1);

        a = (x-x1)*(x-x1);
        b = (y-y1)*(y-y1);
        c = a + b;

        result=sqrt(c);

        if(r>result)
        {
            printf("Case %d: yes\n",i);
        }
        else
        {
            printf("Case %d: no\n",i);
        }
    }
    return 0;
}
