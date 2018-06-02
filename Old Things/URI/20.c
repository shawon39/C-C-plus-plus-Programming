#include <stdio.h>
int main()
{
    int year,month,day,temp,num;
    scanf("%d",&num);

    year=num/365;
    temp=num%365;
    month=temp/30;
    day=temp%30;

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);

    return 0;

}
