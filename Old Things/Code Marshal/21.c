#include <stdio.h>
int main()
{
    double velocity,distance,time;
    int num;

    printf("Enter number of drive time computation: ");
    scanf("%d",&num);
    for(; num; num--)
    {
        scanf("%lf%lf",&distance,&velocity);

        time = distance / velocity;

        printf("%0.2lf\n",time);
    }
    return 0;
}
