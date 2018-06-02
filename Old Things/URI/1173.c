#include <stdio.h>
int main()
{
    int i,t,ar[10];

    scanf("%d",&t);

    for(i=0; i<10; i++)
    {
        ar[i]=t;

        printf("N[%d] = %d\n",i,t);
        t = t * 2;
    }

    return 0;
}
