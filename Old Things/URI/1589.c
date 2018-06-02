#include <stdio.h>
int main()
{
    int a,b,i,d;
    scanf("%d",&d);
    for(i=0; i<d; i++)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}
