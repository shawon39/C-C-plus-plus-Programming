#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int

int arr[100], arr2[100];

int main()
{
    fast; ll n,m; cin >> n >> m;

    for( ll i=0; i<n; i++) {
        cin >> arr[i];
    }
    for( ll i=0; i<m; i++) {
        cin >> arr2[i];
    }
    sort(arr, arr+n);
    sort(arr2, arr2+m);


    if( arr[n-2] >= 0 && arr2[m-1] >= 0 ) { cout << arr[n-2] * arr2[m-1] <<endl; return 0; }

    if(arr[n-2] < 0 && arr2[m-1] <= 0 ) {
        cout << arr[0] * arr2[0] <<endl; return 0;
    }

    if(arr[n-2] < 0 && arr2[m-1] >= 0 ) {
        cout << arr[n-2] * arr2[0] <<endl;
         return 0;
    }

    if(arr[n-2] > 0 && arr2[m-1] <= 0 ) {
        cout << arr[n-1] * arr2[m-1] <<endl;
         return 0;
    }


    return 0;
}
