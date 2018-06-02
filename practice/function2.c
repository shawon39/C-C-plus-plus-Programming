#include <stdio.h>

int x(int a, int b);
int y(int a, int b);

int main()
{
    int z;
    printf("Values is: %d\n",y(-4,6));
}
int x(a,b)
{
    return a+b;
}
int y(a,b)
{
    int z;
    z = x(a,b);
    return z>=0 ? z:-z;
    //if(z>=0) return z;
   // else return -z;
}
