#include <stdio.h>
int main()
{
    int x=10;
    int *p;
    printf("Values of x = %d\n",x);
    p = &x;
    *p=20;
    printf("Values of x = %d\n",x);
    x=15;
    printf("Values of x = %d\n",x);
    printf("Values stored in location %p is %d\n",p,*p);

    printf("Address of x = %p\n",&x);
    printf("Values of p = %p\n",p);
}
