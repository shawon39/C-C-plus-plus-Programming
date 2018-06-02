#include <stdio.h>
int main()
{
    double R,total;
    scanf("%lf",&R);
    total = (4/3.0) * 3.14159 * (R * R * R);
    printf("VOLUME = %0.3lf\n",total);
    return 0;
}
