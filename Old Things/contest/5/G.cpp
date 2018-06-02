#include <stdio.h>
#include<bits/stdc++.h>
#include <string.h>

int main()
{
    char st[20];
    int ct=0;
    while(1)
    {
        gets(st);
        if(st[0]=='*')
        {
            break;
        }
        else if(st[0]=='H')
        {
            printf("Case %d: Hajj-e-Akbar\n",++ct);
        }
        if(st[0]=='U')
        {
            printf("Case %d: Hajj-e-Asghar\n",++ct);
        }
    }
    return 0;
}
