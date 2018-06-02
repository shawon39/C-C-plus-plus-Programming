#include <stdio.h>
int main()
{
    int x=10,y;
    int *p,*q;
    p = &x;
    q = &y;
    y=*p;
    *p=15;
    *q=20;

    printf("Values of x is %d\n",x);
    printf("Values of y is %d\n",y);

    printf("Values of *p is %d\n",*p);
    printf("Values of *q is %d\n",*q);
}
