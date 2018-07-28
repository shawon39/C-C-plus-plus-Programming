#include <stdio.h>

int sumFunction(int x, int y)
{
    int z = x + y;
    return z;
}

int main()
{
    printf("%d\n", sumFunction(5,6));
    printf("%d\n", sumFunction(50,60));
    printf("%d\n", sumFunction(95,96));

    return 0;
}

