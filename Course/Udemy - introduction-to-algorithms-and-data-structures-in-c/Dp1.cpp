#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    long long int dp[n+5];

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i=4; i<=n; i++) {
       dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    cout << dp[n] << endl;
}
