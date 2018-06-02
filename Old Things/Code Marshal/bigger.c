#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);

    if(x>=y && x>=z)
        printf("%d\n",x);

    if(y>=z && y>=x)
        printf("%d\n",y);

    if(z>=x && z>=y)
        printf("%d\n",z);
    return 0;
}
