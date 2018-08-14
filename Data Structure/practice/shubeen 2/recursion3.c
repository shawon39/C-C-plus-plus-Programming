#include <stdio.h>

void recursion()
{
    static int count=1;
    if(count>5)
    {
        return;
    }
    printf("Count: %d\n",count);
    count=count+1;
    recursion();
    // printf("Count: %d\n",count);
}
int main()
{
    recursion();
    return 0;
}
