#include <stdio.h>
int main()
{
    int a,c,g,t;
    for(t=1; t<=5; t++)
    {
        scanf("%d%d",&a,&c);
        for(g=a; g<=c; g++)
        {
            printf("%d ",g);
        }
        printf(" \n\n");
    }
    return 0;
}
