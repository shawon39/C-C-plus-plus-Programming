#include <stdio.h>

int ex(int a, int b)
{
    extern int s;
    s = a + b;
    return s;
}
int s;
int main()
{
    printf("%d",s);
    ex(3,4);
    printf("  %d",s);
}

