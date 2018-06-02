#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,m,l,r;
    char str[105];
    char c1,c2;

    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++)
    {
        scanf(" %c",&str[i]);
    }

    for(i=0; i<m; i++)
    {
        scanf(" %d %d %c %c",&l,&r,&c1,&c2);

        for(j=l-1; j<r; j++)
        {
            if(str[j]==c1) str[j] = c2;
        }
    }

    int len = strlen(str);
    for(i=0; i<n; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
