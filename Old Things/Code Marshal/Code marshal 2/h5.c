#include <stdio.h>
int main()
{
    double num,a,b;
    int x;
    scanf("%lf",&num);

    a = (num / 3.28);
    b = (num * 3.28);

    scanf("%d",&x);

    if(x==1)
    {
        printf("%0.2lf meters",a);
    }
    if(x==2)
    {
        printf("%0.2lf feets",b);
    }

    return 0;
}
