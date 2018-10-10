#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin >> n >> m;

    int sum = m, mx=-1, mn=1e9;

    for(int i=1; i<=n; i++) {
        int x; cin >> x;
        mx = max(x, mx);
        mn = min(x, mn);
        sum += x;
    }

    int res = sum / n;
    if( sum % n ) res++;

    cout << max(res, mx) << " " << m+mx <<endl;
    return 0;
}




