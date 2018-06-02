#include <stdio.h>
int count;
int fib(int n)
{
    count++;
    if(n==0) return 0;
    if(n==1) return 1;
    else return fib(n-1)+fib(n-2);
}

int main()
{
    int x,t,f;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        count=0;
        f=fib(x);
        printf("fib(%d) = %d calls = %d\n",x,count-1,f);
    }
    return 0;
}
