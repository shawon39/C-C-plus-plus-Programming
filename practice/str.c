#include <stdio.h>
#include <string.h>
int main(void)
{
    char st[100];
    int i,ln;
    scanf("%s",st);
    ln = strlen(st);
    for(i=0; i<ln; i++)
    {
        if(st[i]=='1' || st[i]=='2' || st[i]=='3' || st[i]=='4' || st[i]=='5' || st[i]=='6' || st[i]=='7' || st[i]=='8' || st[i]=='9' || st[i]=='0')
        {
            printf("%s",st[i]);
        }
        else
        {
            continue;
        }
    }
    return 0;
}

