#include <stdio.h>
int main()
{
    int i,j,ar[20],k=0;

    for(i=0; i<20; i++)
    {
        scanf("%d",&ar[i]);

    }
    for(i=19; i>=0; i--)
    {
        printf("N[%d] = %d\n",k,ar[i]);
        k++;
    }

    return 0;
}
