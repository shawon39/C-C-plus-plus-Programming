#include <stdio.h>
int main()
{
    double F,C;
    scanf("%lf",&C);
    F = ((9*C)+160)/5;
    if(F>=98.4)
    {
        printf("Fever\n");
    }
    else
    {
        printf("Not fever\n");
    }
    return 0;
}
