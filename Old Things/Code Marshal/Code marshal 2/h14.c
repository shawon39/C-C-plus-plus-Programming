#include <stdio.h>
int main()
{
    int rooms,len,width,i,total;
    scanf("%d",&rooms);
    scanf("%d%d",&len,&width);

    total=0;
    for(i=rooms;i>0;i--){
        total = total + (len * width);
    }
    printf("Total square footage = %d",total);
    return 0;
}
