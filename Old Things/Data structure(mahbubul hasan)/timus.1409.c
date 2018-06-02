#include <stdio.h>
int main()
{
    int a,b,total;
    scanf("%d%d",&a,&b);
    total=a+b-1;
    printf("%d %d\n",total-a,total-b);
    return 0;
}
