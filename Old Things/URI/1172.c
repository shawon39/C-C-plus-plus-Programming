#include <stdio.h>
int main()
{
    int ar[10],i;

    for(i=0; i<10; i++)
    {
        scanf("%d",&ar[i]);

        if(ar[i]<=0) printf("X[%d] = 1\n",i);

        else printf("X[%d] = %d\n",i,ar[i]);
    }
    return 0;
}
