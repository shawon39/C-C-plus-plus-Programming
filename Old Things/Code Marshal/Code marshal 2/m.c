#include <stdio.h>
int main()
{
    int i,T,num,value;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&num);
        value = (num+3)/3;
        printf("Case %d: %d\n",i,value);
    }
    return 0;
}
