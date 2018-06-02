#include <stdio.h>
int main()
{
    int x;
    x = 1;
    while(x<=100)
    {
        if(x%2==0)
        {
            printf("%d\n",x);
        }
        x = x+1;
    }
    return 0;
}
