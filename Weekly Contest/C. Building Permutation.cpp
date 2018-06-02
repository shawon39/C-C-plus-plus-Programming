#include <bits/stdc++.h>
using namespace std;

int arr[1000005];
long long lol;
int n;

int main() {

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    for(int i=0; i<n; i++)
    {
        lol += (long long) abs(arr[i] - i -1);
    }
    cout << lol <<endl;
    return 0;
}

