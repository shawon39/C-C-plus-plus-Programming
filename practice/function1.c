#include <stdio.h>

int power(int x,int y)
{
    int xx=1,i;
    for(i=1; i<=y; i++)
    {
        xx = xx * x;
    }
    return xx;
}
int main()
{
    printf("Power %d\n",power(2,3));
    return 0;
}
