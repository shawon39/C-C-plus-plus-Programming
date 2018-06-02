#include <stdio.h>
int main()
{
    int x=10;
    int *p;
    p = &x;

    printf("Value %d\n",*p);
    printf("Value %p\n",x);
    printf("Value %p\n\n",*p);

    printf("Address %p\n",p);
    printf("Address %p\n",&x);

    return 0;
}
