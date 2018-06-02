#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,ct=0;
    int a,b,res,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);

        res = ( a * b ) / 2;
        ans = res;

        if(a==1 || b==1)
        {
            if(a>b) ans=a;
            else ans=b;
        }

        else if(a==2 && b%2==1 || b==2 && a%2==1 )
        {
            res++;
            ans = res;
        }

        else if( a==2 || b==2 )
        {
            int x;
            if(a>b) x=a;
            else x = b;

            if(x%4==0) ans = res;
            else
            {
                res+=2;
                ans = res;
            }
        }
        else
        {
            if(a%2==1 && b%2==1)
            {
                res++;
                ans = res;
            }
        }
        printf("Case %d: %d\n",++ct,ans);

    }
    return 0;
}
