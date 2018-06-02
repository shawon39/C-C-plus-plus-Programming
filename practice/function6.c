#include <stdio.h>

void abc(int x, int y,int *s,int*sb,int*m,int*d)
{
    *s = x+y;
    *sb=x-y;
    *m=x*y;
    *d=x/y;
}
int main()
{
    int a=6,b=2,s,sb,m,d;
    abc(a,b,&s,&sb,&m,&d);
    printf("%d %d %d %d",s,sb,m,d);
    return 0;
}
