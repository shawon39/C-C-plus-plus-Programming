#include <stdio.h>
#include <math.h>

int main()
{
    char str[100];
    gets(str);

    int len = strlen(str);

    printf("%d", len);

    return 0;
}
