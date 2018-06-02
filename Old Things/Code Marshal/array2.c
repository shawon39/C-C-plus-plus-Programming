#include <stdio.h>
int main()
{
    int i;

    int n[4];

    for(i=0; i<4; i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0; i<4; i++)
    {
        printf("%d\n",n[i]);
    }
    return 0;
}

