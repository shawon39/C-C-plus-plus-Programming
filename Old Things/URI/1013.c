#include <stdio.h>
int main()
{
    int a,b,c;
    scanf ("%d%d%d", &a, &b, &c);
    if(a>b)
    {
        if(a>c) printf ("%d eh o maior\n",a);
        else printf ("%d eh o maior\n",c);
    }
    if(b>a)
    {
        if(b>c) printf ("%d eh o maior\n",b);
        else printf ("%d eh o maior\n",c);
    }
    return 0;
}
