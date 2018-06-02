#include <stdio.h>
int main()
{
    int p,q;
    scanf("%d",&p);
    scanf("%d",&q);

    printf("%d\n",p && q);
    printf("%d\n",p || q);
    printf("%d\n",(p || q) && !(p && q));

    return 0;
}
