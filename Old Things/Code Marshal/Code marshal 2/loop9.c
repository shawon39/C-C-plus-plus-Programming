#include <stdio.h>
int main()
{
    int x,y,sum;

    while(scanf("%d%d",&x,&y)!=EOF){
        sum = x + y;
        printf("%d\n\n",sum);
    }
    return 0;
}
