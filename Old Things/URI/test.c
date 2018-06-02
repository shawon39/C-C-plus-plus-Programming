#include <stdio.h>
int main()
{
    int a,i,c,j=0,hit=1;
    scanf("%d", &a);
    int ara[a];
    for(i=0; i<a; i++)
    {
        scanf("%d", &ara[i]);
    }

    c=ara[j];

    for(j=0; j<a; j++)
    {
        if(ara[j]<c)
        {
            c=ara[j];
            hit=j+1;
        }

    }
    printf("%d\n", hit);
    return 0;
}
