#include <stdio.h>
int main()
{
    double F,C;
    scanf("%lf",&F);
    C=(F-32)/9*5;
    printf("%.2lf\n",C);
    return 0;
}
