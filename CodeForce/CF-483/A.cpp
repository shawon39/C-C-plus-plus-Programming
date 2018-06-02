#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n; int arr[1005];
    for(int i=0; i<n; i++) { cin >> arr[i]; }

    sort(arr, arr+n);

    if( n%2 == 0 ) {
        int x = n/2 - 1;
        cout << arr[x] <<endl;
    }
    else {
        int x = n/2;
        cout << arr[x] <<endl;
    }
    //main();
    return 0;
}
