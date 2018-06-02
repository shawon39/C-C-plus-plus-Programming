#include <stdio.h>
int main()
{
    int A,B,C,i,T;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d",&A,&B,&C);

        if(A>B && A>C)
        {
            printf("Case %d: %d\n",i,A);
        }
        else if(B>A && B>C)
        {
            printf("Case %d: %d\n",i,B);
        }
        else
        {
            printf("Case %d: %d\n",i,C);
        }
    }
    return 0;
}
