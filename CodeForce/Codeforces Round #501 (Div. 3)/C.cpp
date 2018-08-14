#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n+5];
    int arr2[n+5];
    int arr3[n+5];

    ll sum = 0, sum2=0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i] >> arr2[i];
        arr3[i] = abs(arr[i] - arr2[i]);

        sum += max(arr[i], arr2[i]);
        sum2 += min(arr[i], arr2[i]);
    }

    if( sum <= m )
    {
        cout << 0 <<endl;
        return 0;
    }

    if( sum2 > m )
    {
        cout << -1 <<endl;
        return 0;
    }

    sort(arr3, arr3+n);
    int ct = 0;

    while( sum > m )
    {
        sum -= arr3[--n];
        ct++;
    }
    cout << ct <<endl;
    return 0;
}

