#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int L,v,l,r,ans;
        cin >> L >> v >> l >> r;
        int res = L/v;
        int a = (l-1)/v;
        int b = r/v;

        cout << res - (b-a) << endl;
    }
    return 0;
}






























