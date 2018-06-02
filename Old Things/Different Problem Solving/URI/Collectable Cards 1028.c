#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    if(b==0) return a;
    else{
        gcd(b,a%b);
    }
}

int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        if(x>y) printf("%d\n",gcd(x,y));
        else printf("%d\n",gcd(y,x));
    }
    return 0;
}
