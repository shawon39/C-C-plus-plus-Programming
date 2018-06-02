#include <stdio.h>
int main()
{
    double a=4.0, b=4.5, c=5.0, d=2.0, e=1.5,x,y;

    scanf("%lf %lf", &x, &y);

    if(x==1) printf("Total: R$ %0.2lf\n",a*y);
    else if(x==2) printf("Total: R$ %0.2lf\n",b*y);
    else if(x==3) printf("Total: R$ %0.2lf\n",c*y);
    else if(x==4) printf("Total: R$ %0.2lf\n",d*y);
    else if(x==5) printf("Total: R$ %0.2lf\n",e*y);

    return 0;
}
