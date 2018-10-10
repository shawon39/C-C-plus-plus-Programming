#include <bits/stdc++.h>
using namespace std;

const int N = 1001;

long long dp[N];

int main() {

  long long n;
  cin >> n;
  dp[0] = 1;
  dp[1] = 2;
  int i = 1;
  while (dp[i] <= n) {
    i++;
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  cout << dp[i]<<endl;
}
