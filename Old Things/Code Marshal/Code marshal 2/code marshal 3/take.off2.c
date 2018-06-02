#include <stdio.h>
int main()
{
    int i,T,x;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        long long int a,b,c,d,bill;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        bill = a+b+c+d;
        printf("%d\n",bill);
    }
    return 0;
}
