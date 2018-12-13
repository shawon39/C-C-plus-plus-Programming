#include<stdio.h>
int main()
{
    int i,j,n,array[100];
    for(i=0; i<20; i++)
    {
        j=0;
        scanf("%d",&array[i]);
    }
    for(i=19; i>=0; i--)
    {

    printf("N[%d] = %d\n",j,array[i]);
    j++;

}
return 0;
}
