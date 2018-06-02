#include <stdio.h>
int main()
{
    double hours,av_speed,liters;
    scanf("%lf%lf",&hours,&av_speed);
    liters = (hours / ( 12 / av_speed));
    printf("%0.3lf\n",liters);
    return 0;
}
