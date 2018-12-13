#include <stdio.h>
int main()
{
    int x = 5, y = 5;

    if(x == y)
    {
        printf("equal");
        if(x>0)
        {
            printf("x is positive");
        }
        else
        {
            printf("x is not positive");
        }

        if(y<0)
        {
            printf("y is Negative");
        }
        else
        {
            printf("x is not Negative");
        }
    }
    else
    {
        printf("not equal");
    }
    return 0;
}

