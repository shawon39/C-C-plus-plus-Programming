/*1 2 3 PUM
5 6 7 PUM
9 10 11 PUM
13 14 15 PUM
17 18 19 PUM
21 22 23 PUM
25 26 27 PUM
*/

#include <stdio.h>
int main()
{
    int N,i,k,j;
    k=1;
    j=3;
    scanf("%d",&N);
    while(N--)
    {
        for(i=k; i<=j; i++)
        {
            printf("%d ",i);
        }
        printf("PUM\n");
        k+=4;
        j+=4;
    }
    return 0;
}
