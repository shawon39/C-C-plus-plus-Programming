#include <stdio.h>
int main()
{
    int x,y,i;
    scanf("%d%d",&x,&y);

    for(i=x;i<=y;i++)
        printf("%d ",i);

    if(x>y){

         for(i=x;i>=y;i--)
        printf("%d ",i);

    }


}
