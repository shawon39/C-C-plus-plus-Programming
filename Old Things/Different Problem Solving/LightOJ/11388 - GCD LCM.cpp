#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,g,l;
        scanf("%d %d",&a,&b);

        if(b%a!=0)
        {
            printf("-1\n");
            continue;
        }
        printf("%d %d\n",a,b);
    }

    return 0;
}
