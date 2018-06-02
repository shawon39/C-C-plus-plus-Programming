#include <stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int sumd(int x,int y)
{
    return sum(x,y)+sum(x,y);
}
int main()
{
    int p,q;
    while(scanf("%d%d",&p,&q)!=EOF)
    {
        printf("Sum: %d\n",sumd(p,q));
    }
    return 0;
}

