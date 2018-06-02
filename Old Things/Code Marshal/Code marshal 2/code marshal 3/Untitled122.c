#include <stdio.h>
int main()
{
    int x, y;
    float f;
    char c;
    int a, b;

    scanf("%d%d", &x,&y);

    scanf("%f", &f);

    scanf("%c", &c);

    printf("%d %d\n %.2f\n %c\n", x, y, f, c);

    return 0;
}

