#include <stdio.h>
int main()
{
    int a,b;
    char ch;
    scanf("%d%d %c",&a,&b,&ch);

    if(ch=='A') printf("%d",a+b);
    if(ch=='S') printf("%d",a-b);
    if(ch=='M') printf("%d",a*b);
    if(ch=='D' && b!=0) printf("%d",a/b);

    return 0;
}
