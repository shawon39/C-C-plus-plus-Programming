#include<stdio.h>
int main()
{
   int array[100],n=0,i;

    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        array[i] = n;
        n = n*2;
    printf("N[%d] = %d\n",i,array[i]);
    }

return 0;



}
