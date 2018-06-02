#include <stdio.h>
int main()
{
    int day,hour,min,sec,eday,ehour,emin,esec,d,h,m,s;

    char chh[100],ch;

    scanf("%s",chh);
    scanf("%d",&day);

    scanf("%d %c%d %c%d",&hour,&ch,&min,&ch,&sec);

    scanf("%s",chh);
    scanf("%d",&eday);

    scanf("%d %c%d %c%d",&ehour,&ch,&emin,&ch,&esec);

    if(eday>=day)
    {
        d = eday-day;
    }

    if(ehour>=hour)
    {
        h = ehour-hour;
    }
    else
    {
        h = 24+ehour-hour;
        d--;
    }

    if(emin>=min)
    {
        m = emin-min;
    }
    else
    {
        m = 60+emin-min;
        h--;
    }

    if(esec>=sec)
    {
        s = esec-sec;
    }
    else
    {
        s = 60+esec-sec;
        m--;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);

    return 0;
}

