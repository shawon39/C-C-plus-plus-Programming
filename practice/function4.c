#include <stdio.h>

int st()
{
    static int b=0;
    b++;
    return b;
}

int main()
{
    printf("%d\n",st());
    printf("%d\n",st());
    printf("%d\n",st());
    printf("%d\n",st());
    printf("%d\n",st());
}
