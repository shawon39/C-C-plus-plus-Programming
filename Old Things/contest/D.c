#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char st[110],st2;
    int i,count=1,ln;
    scanf("%s",st);
    ln=strlen(st);
    st2=st[0];
    for(i=0; i<ln; i++)
    {
        if(st2==st[i+1])
        {
            count++;
            if(count==7) break;
        }
        else
        {
            st2=st[i+1];
            count=1;
        }
    }
    if(count==7) printf("YES\n");
    else printf("NO\n");
    return 0;
}
