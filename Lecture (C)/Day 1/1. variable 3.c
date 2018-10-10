#include <stdio.h>

int main()
{
    int x;
    float y;
    double d;
    char ch, ch2;
    const double pi = 3.14159;

    scanf("%d %f %lf %c %c", &x, &y, &d, &ch, &ch2);

    printf("%d\n%.2f\n%.3lf\n%c\n%c\n",x,y,d,ch,ch2);
    printf("%.5lf", pi);

    return 0;
}


