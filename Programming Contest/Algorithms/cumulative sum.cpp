#include <bits/stdc++.h>
using namespace std;

int sum[100005];

int main()
{
    int n; cin >> n;
    int arr[n];

    for(int i=1; i<=n; i++) {
        cin >> arr[i];
    }

    for(int i=1; i<=n; i++) {
        sum[i] = sum[i-1] + arr[i];
    }

    for(int i=1; i<=n; i++) {
       cout << sum[i] << " ";
    }

    cout << endl << sum[5] - sum[3-1] << endl;  /// sum[j] - sum[i-1]

    return 0;
}
