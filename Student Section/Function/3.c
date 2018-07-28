#include <stdio.h>

int sum(int x, int y)
{
    int z = x + y;
    return z;
}

int subtract(int x, int y)
{
    int z = x - y;
    return z;
}

int multiplication(int x, int y)
{
    int z = x * y;
    return z;
}

int division(int x, int y)
{
    int z = x / y;
    return z;
}

int mod(int x, int y)
{
    int z = x % y;
    return z;
}

int main()
{
    int a, b;
    a = 10, b =5;

    int s = sum(a,b);
    printf("Sum = %d\n", s);

    int sb = subtract(a,b);
    printf("subtract = %d\n", sb);

    int m = multiplication(a,b);
    printf("multiplication = %d\n", m);

    int d = division(a,b);
    printf("division = %d\n", d);

    int md = mod(a,b);
    printf("mod = %d\n", md);

    return 0;
}


