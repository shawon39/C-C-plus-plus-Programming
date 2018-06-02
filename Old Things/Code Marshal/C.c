#include <stdio.h>
int main()
{
    int x, y;
    double d;
    char a;

    scanf("%d%d", &x,&y);
    scanf("%lf", &d);
    scanf("%c", &a);

    printf("%d %d\n", x, y);
    printf("%.2lf\n", d);
    printf("%c\n", a);
    return 0;
}
