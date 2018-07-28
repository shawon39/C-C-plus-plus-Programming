#include <bits/stdc++.h>
using namespace std;
int arr[2000005];
int main()
{
    int n; cin >> n; for(int i=0; i<n; i++) cin >> arr[i];
    long long int x = 0, y = 0, i = 0, j = n-1, ans = 0;
    while( i <= j ) {
        if( x > y ) y += arr[j],j--;
        else x += arr[i],i++;
        x == y ? ans = x : ans = ans;
    }
    cout << ans <<endl; return 0;
}

