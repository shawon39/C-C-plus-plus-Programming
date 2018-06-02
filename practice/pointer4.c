#include <stdio.h>
int main()
{
    int x=10,y;
    int *p;
    printf("Values of x = %d\n",x);
    p=&x;
    y=*p;
    *p=15;

    printf("Values of x = %d\n",x);
    printf("Values of y = %d\n",y);

    printf("Values of *p = %d\n",*p);

    printf("Address of x = %p\n",&x);
    printf("Address of y = %p\n",&y);

    printf("Values of p = %p\n",p);

}
