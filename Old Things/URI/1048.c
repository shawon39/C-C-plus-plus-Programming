#include <stdio.h>
int main()
{
    double num,earned,Salary;
    int parcentage;
    char ch='%';
    scanf("%lf",&num);

    if(num>0 && num<=400.0)
    {
        earned= (num * 15)/100;
        Salary = num + earned;
        parcentage = 15;
    }

    else if(num>400.0 && num<=800.0)
    {
        earned= (num * 12)/100;
        Salary = num + earned;
        parcentage = 12;
    }

    else if(num>800.0 && num<=1200.0)
    {
        earned= (num * 10)/100;
        Salary = num + earned;
        parcentage = 10;
    }

    else if(num>1200.0 && num<=2000.0)
    {
        earned= (num * 7)/100;
        Salary = num + earned;
        parcentage = 7;
    }

    else if(num>2000.0)
    {
        earned= (num * 4)/100;
        Salary = num + earned;
        parcentage = 4;
    }

    printf("Novo salario: %0.2lf\n",Salary);
    printf("Reajuste ganho: %0.2lf\n",earned);
    printf("Em percentual: %d %c\n",parcentage,ch);

    return 0;
}

