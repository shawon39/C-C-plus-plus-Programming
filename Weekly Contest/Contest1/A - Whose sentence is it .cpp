#include <bits/stdc++.h>
using namespace std;

int main()
{
    char needle[10] = "lala.";
    char needle2[10] = "miao.";
    char ch[110];
    int t,ct,ct2;
    scanf("%d",&t);
    while(t--)
    {
        ct=0;
        ct2=0;
        scanf(" %[^\t\n]s",&ch);

        if(strstr(ch, needle))
        {
           ct=1;
        }
        if(strstr(ch, needle2))
        {
            ct2=1;
        }

        if(ct==1 && ct2==1)
        {
           printf("OMG>.< I don't know!\n");
        }
        else if(ct==1)
        {
            printf("Freda's\n");
        }
        else if(ct2==1)
        {
            printf("Rainbow's\n");
        }
        else printf("OMG>.< I don't know!\n");
    }

    return 0;
}

