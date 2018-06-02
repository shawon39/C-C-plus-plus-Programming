#include <stdio.h>

int fib(n)
{
    static int first=0,second=1,sum;
    if(n>0)
    {
        sum = first + second;
        first = second;
        second = sum;
        printf(" %d",sum);
        fib(n-1);
    }
}

int main()
{
    int i=0,j=1,num;
    scanf("%d",&num);
    printf("%d %d",i,j);
    fib(num);
    return 0;
}
