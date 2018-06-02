#include <stdio.h>
int main()
{
    int code1,code2,unit1,unit2;
    double price1,price2,total;
    scanf("%d%d%lf%d%d%lf",&code1,&unit1,&price1,&code2,&unit2,&price2);
    total = (unit1 * price1) + (unit2 * price2);
    printf("VALOR A PAGAR: R$ %0.2lf\n",total);
    return 0;
}
