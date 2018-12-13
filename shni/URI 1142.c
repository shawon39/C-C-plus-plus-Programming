#include<stdio.h>
int main()
{
    int a=1,b=2,c=3,i,m;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("%d %d %d PUM\n",a,b,c);
        a = a+4;
        b =  b+4;
        c = c+4;
    }
    return 0;
}
