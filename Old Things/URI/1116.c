#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        double num,num1;
        scanf("%lf %lf",&num, &num1);

        if(num1==0 && num!=0) printf("divisao impossivel\n");

        else printf("%.1lf\n",num/num1);
    }
    return 0;
}
