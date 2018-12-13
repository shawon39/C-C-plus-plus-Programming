#include<stdio.h>
int main()
{
    int n,array[100],i;
    for(i=0; i<10; i++)
    {
        scanf("%d",&array[i]);
        if(array[i]<=0)array[i]=1;
        printf("X[%d] = %d\n",i,array[i]);
    }
    return 0;
}


