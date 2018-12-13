#include<stdio.h>
int main()
{
    int x,y;
    double k,z;
    scanf("%d %d",&x,&y);
    z = (y/12.0);
    k = (z*x);

    printf("%.3lf\n",k);
    return 0;
}
