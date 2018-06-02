#include <stdio.h>
int main()
{
    int x;
    double y,distance;
    scanf("%d%lf",&x,&y);
    distance = ( x / y );
    printf("%0.3lf km/l\n",distance);
    return 0;
}
