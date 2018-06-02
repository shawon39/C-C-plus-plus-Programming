#include <stdio.h>
int main()
{
    int left,right;
    while(1)
    {
        scanf("%d%d",&left,&right);
        if(left==0 && right==0) break;
        else printf("%d\n",left+right);
    }
    return 0;
}
