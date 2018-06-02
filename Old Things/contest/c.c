#include <stdio.h>

int main()
{
    char ch[200];
    int t,x=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",ch);
        if(ch[0]=='+' || ch[1]=='+')
        {
            x++;
        }
        else
            x--;
    }
    printf("%d\n",x);
    return 0;
}
