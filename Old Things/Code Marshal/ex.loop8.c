#include <stdio.h>
int main()
{
    int i,j,n;

    for(i=1;i<=20;i+=2){
        for(j=1;j<i+1;j+=1){
            printf("* ");
        }
        printf("\n");
    }
}
