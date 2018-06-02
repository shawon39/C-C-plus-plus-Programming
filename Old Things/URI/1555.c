#include <stdio.h>

int aa(int x,int y)
{
    return (x*3)*(3*x) + y*y;
}
int bb(int x,int y)
{
    return (x*x)*2 + (5*y)*(5*y);
}
int cc(int x,int y)
{
    return x*(-100) + y*y*y;
}

int main()
{
    int t,a,b,xx,yy,zz;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);

        xx=aa(a,b);
        yy=bb(a,b);
        zz=cc(a,b);

        if(xx>yy && xx>zz) printf("Rafael ganhou\n");
        else if(yy>xx && yy>zz) printf("Beto ganhou\n");
        else printf("Carlos ganhou\n");
    }
    return 0;
}
