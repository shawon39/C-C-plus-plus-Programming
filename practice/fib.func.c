#include <stdio.h>

int fib(int x)
{

    if(x==1 || x==2)
    {
        return 1;
    }
    else
    {
        return fib(x-1)+(x-2);
    }
}
int main()
{
    int a,n;
    scanf("%d",&a);
    n = fib(a);
    printf("%d\n",n);

}

