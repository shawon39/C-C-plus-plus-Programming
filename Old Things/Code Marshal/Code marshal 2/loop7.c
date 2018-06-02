#include <stdio.h>
int main()
{
    int x,y;
    for(x=5; x>=0; x--)
    {
        for(y=0; y<x+1; y++)
        {
            printf("* ");
        }
        printf(" \n");
    }
}
