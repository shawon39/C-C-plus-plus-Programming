#include <stdio.h>
int main()
{
    //freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        printf("Sum: %d\n",a+b);
    }
    return 0;
}
