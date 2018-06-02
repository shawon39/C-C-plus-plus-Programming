#include <stdio.h>
int main()
{
    int i,k=0,n;

    scanf("%d",&n);

    for(i=0,k=0; i<1000; i++)
    {
        printf("N[%d] = %d\n",i,k++);
        if(k==n) k=0;
    }
    return 0;
}
