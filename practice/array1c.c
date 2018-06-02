#include <stdio.h>

int main(void)
{
    int sqrt[111];
    int i,j;

    scanf("%d",&i);

    for(j=0; j<=10; j++){

        sqrt[j]=j*j;

        printf("%d ",sqrt[j]);
    }

    return 0;
}
