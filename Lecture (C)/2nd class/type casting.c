#include <stdio.h>
int main()
{
    float x;
    int a,b;
    scanf("%d %d", &a, &b);

    x = (float) a/b;

    printf("%f",x);


    char ch[] = "2443";
    int fl = atoi(ch); /// STRING TO INT


    /// itoa() INT TO STRING

    printf("%d", fl);

    return 0;
}
