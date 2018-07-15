#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d; cin >> n >> d; int arr[1000];
    for(int i=0; i<n; i++) cin >> arr[i];

    int ct = 0;
    for(int i=0; i<n-1; i++)
    {
        int x = arr[i+1] - arr[i];
        if( x == d*2 ) ct++;
        if( x > d*2 ) ct+=2;

    }
    cout << ct + 2 <<endl; //main();
    return 0;
}






