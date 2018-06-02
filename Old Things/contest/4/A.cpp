#include <stdio.h>
#include <string.h>

int main()
{
    int i,b=0,ln;
    char ch[100];
    gets(ch);
    ln=strlen(ch);
    for(i=0; i<ln; i++)
    {
        if(ch[i]=='H' || ch[i]=='Q' || ch[i]=='9')
        {
            printf("YES\n");
            b++;
            break;
        }
    }
    if(b==0)  printf("NO\n");
    return 0;
}
