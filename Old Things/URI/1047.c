#include <stdio.h>
int main()
{
    int start_hours,start_minutes,end_hours,end_minutes,total_hours,total_minutes;

    scanf("%d %d %d %d",&start_hours, &start_minutes, &end_hours, &end_minutes);

    total_hours = end_hours - start_hours;

    if(total_hours<0)
    {
        total_hours = 24+(end_hours - start_hours);
    }

    total_minutes = end_minutes - start_minutes;

    if(total_minutes<0)
    {
        total_minutes = 60+(end_minutes - start_minutes);
        total_hours--;
    }

    if(start_hours==end_hours && start_minutes==end_minutes)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total_hours,total_minutes);
    }

    return 0;
}
