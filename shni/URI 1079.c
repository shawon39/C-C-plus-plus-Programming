#include<stdio.h>
int main()
{
    int i,test;
    double a,b,c,d,e;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
    d = ((a*2.0)+(b*3.0)+(c*5.0));
        e = (2.0+3.0+5.0);
        printf("%.1lf\n",(d/e));
    }
    return 0;

}
