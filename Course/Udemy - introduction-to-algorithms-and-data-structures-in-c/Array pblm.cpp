#include <bits/stdc++.h>
using namespace std;

int floop(int arr[], int n) { for(int i=1; i<=n; i++) { cout << arr[i] << " "; } cout <<endl; }

int main()
{
    int n, m; cin >> n >> m;
    int arr[n+5];

    for(int i=1; i<=n; i++) {
        cin >> arr[i];
    }

    while(m--) {
            int left, right, x;
            cin >> left >> right >> x;
        for(int i=left; i<=right; i++) {
            arr[i] += x;
        }
    }

    floop(arr,n);

    return 0;
}

//6 2
//1 1 1 4 5 6
//1 5 2
//2 3 10

