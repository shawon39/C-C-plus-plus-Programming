#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;

    for(int i=1; i<=test; i++)
    {
        int x, y; cin >> x >> y;
        long long int lol, ans, bal, a, b;

        bal = y-x+1;
        lol = bal/3;
        ans = lol*2;

        if( bal%3 == 1 ) {
            ans++;
            a = y;
            // because 1,4,7,10..... is not divisible by 3
            if( a % 3 == 1 ) ans--;
        }
        else if( bal%3 == 2 ) {
            ans++;
            a = y-2;

            if( a%3==1 ) ans++;
        }

        printf("Case %d: %d\n", i, ans);

    }
    return 0;
}

