#include <stdio.h>
int main()
{
    int x = 5, y = 5;

    if( x > 0 )
    {
        if( y > 0 )
        {
            if( x == y )
            {
                printf("Equal !");
            }
            else
            {
                printf("Not Equal !");
            }
        }
        else
        {
            printf("Y NEGATIVE !");
        }
    }
    else
    {
        printf("X NEGATIVE !");
    }
    return 0;
}
