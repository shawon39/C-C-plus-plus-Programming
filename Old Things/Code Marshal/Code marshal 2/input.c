#include<stdio.h>
int main()
{
    int x,y;
    double d;
    char c;
    scanf("%d %d %lf %c",&x,&y,&d,&c);
    printf("%d %d\n%0.2lf\n%c\n",x,y,d,c);
    return 0;
}

