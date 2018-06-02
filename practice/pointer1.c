#include <stdio.h>
int main()
{
    double pi = 3.1416432555546;
    int *ptr;

    ptr = &pi;

    printf("Value of pi = %lf\n",pi);
    printf("Value of pi = %lf\n",*ptr);
}


/// warning: incompatible pointer types assigning to 'int *' from 'double *'
