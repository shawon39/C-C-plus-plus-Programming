#include <stdio.h>
int main()
{
    int div,A,B,T,k=0,aa,bb;
    scanf("%d",&T);
    while(T--)
    {
        aa=0, bb=0,div=0;
        scanf("%d %d",&A, &B);

        if(A==B){
            if(A%3==1)  printf("Case %d: %d\n",++k,0);
            else printf("Case %d: %d\n",++k,1);
            continue;
        }

        int f = A-1;
        aa = ((double)f/3)*2;
        bb = ((double)B/3)*2;
        div = bb-aa;

        printf("Case %d: %d\n",++k,div);
    }
    return 0;
}
