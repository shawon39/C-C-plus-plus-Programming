#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,avarage,avg=0;
    int count=0;

    scanf("%lf %lf %lf %lf %lf %lf",&a, &b, &c, &d, &e, &f);

    if(a>0) avg = avg + a, count = count + 1;
    if(b>0) avg = avg + b, count = count + 1;
    if(c>0) avg = avg + c, count = count + 1;
    if(d>0) avg = avg + d, count = count + 1;
    if(e>0) avg = avg + e, count = count + 1;
    if(f>0) avg = avg + f, count = count + 1;

    avarage = avg / count ;

    printf("%d valores positivos\n",count);
    printf("%0.1lf\n",avarage);

    return 0;

}
