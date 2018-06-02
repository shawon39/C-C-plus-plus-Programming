#include <stdio.h>
#include <string.h>

int main()
{
    int count=0,i,ln;
    char s[105];
    scanf("%s", s);
    ln=strlen(s);
    for(i=0; i<ln; i++)
    {
        if(s[i]<91) count++;
    }
    if(s[0]>96 && count==ln-1)
    {
        printf("%c", s[0]-32);
        for(i=1; i<ln; i++)
        {
            printf("%c", s[i]+32);
        }
    }
    else if(count==ln)
    {
        for(i=0; i<ln; i++)
        {
            printf("%c", s[i]+32);
        }
    }
    else printf("%s", s);
    return 0;
}
