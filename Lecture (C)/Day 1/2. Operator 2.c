#include <stdio.h>
int main()
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a);
    printf("a++ = %d \n", a++);
    printf("a++ = %d \n", a++);

    printf("--b = %d \n", --b);

    printf("++c = %.2f \n", ++c);

    printf("--d = %.2f \n", --d);

    printf("a = %d \n", a);

    return 0;
}
