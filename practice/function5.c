#include <stdio.h>

void value(int *a)
{
    (*a)++;
}

int main()
{
    int x=5,b;
    printf("Values: %d\n",x);
    value(&x);
    printf("Values: %d\n",x);

    return 0;
}
