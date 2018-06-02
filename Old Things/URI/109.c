#include <stdio.h>
int main()
{
    char name[20];
    double salary,sold,total;
    scanf("%s%lf%lf",name,&salary,&sold);
    total = (sold*15)/100 + salary;
    printf("TOTAL = R$ %0.2lf\n",total);
    return 0;
}
