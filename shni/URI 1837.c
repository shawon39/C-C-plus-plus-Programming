#include<stdio.h>
int main()
{
    int a,b,c,e,f,m,n,g;
    scanf("%d %d",&m,&n);
if((m<0) && (n>0))
{
    c = m/n;
    b = c-1;
    e = (n*b);
    f = e*(-1);
    a = f+m;
}
 else if((m<0) && (n<0))
{
    g = n*(-1);
    c = m/g;
    b = c-1;
    e = (g*b);
    f = e*(-1);
    a = f+m;
}

else{
    a = m%n;
    b = m/n;
}
    printf("%d %d\n",b,a);
    return 0;
}
