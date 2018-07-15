#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, x, n, ans, mod; cin >> test;
    while ( test-- )
    {
        cin >> x >> n;
        ans = x / n;
        if (ans == 0) cout << -1 <<endl;
        else {

            mod = x % n;

            for (int i = 0; mod+i < n; i++ )
            {
                cout << ans << " ";
            }
            for (int i = 0; i < mod; i++ )
            {
                cout << ans+1 << " ";
            }
            cout << endl;

        }
    }
    return 0;
}
