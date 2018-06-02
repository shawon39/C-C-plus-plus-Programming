#include <stdio.h>
int main()
{
    int N,ar[1000],i,k,position;
    scanf("%d",&N);

    for(i=0; i<N; i++)
    {
        scanf("%d",&ar[i]);
        if(i==0)
        {
            k=ar[0];
        }
        if(ar[i]<k)
        {
            k = ar[i];
            position = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",k,position);
    return 0;
}
