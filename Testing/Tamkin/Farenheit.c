#include <stdio.h>
int main()
{
    float celsius [] = {10, 20, 30, 40, 50};
    float fahrenheit [10];

    int i=0;

    for(i=0; i<5; i++)
    {
        fahrenheit[i] = (9.0/5)*celsius[i]+32;
    }

    for(i=0; i<5; i++)
    {
        printf("%.1f\n", fahrenheit[i]);
    }

    return 0;
}


