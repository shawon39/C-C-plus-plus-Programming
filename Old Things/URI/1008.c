#include <stdio.h>
int main()
{
    int number,hours;
    double money,salary;
    scanf("%d%d%lf",&number,&hours,&money);
    salary = ( hours * money );
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %0.2lf\n",salary);
    return 0;
}
