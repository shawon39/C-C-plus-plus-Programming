#include<stdio.h>
int main(void)
{
    int n,a=0,b=1,c=1;
    scanf("%d",&n);
    printf("0");
    n = n-1;
    while(n--)
    {
        printf(" ");
        printf("%d",c);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");
    return 0;
}
