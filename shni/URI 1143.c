#include<stdio.h>
int main()
{
int a=1,b=1,c=1,m,i;
scanf("%d",&m);
for(i=0;i<m;i++)
{
    printf("%d %d %d\n",a,b,c);
    a = a+1;
    b = (a*a);
    c = (a*a*a);
}
return 0;
}
