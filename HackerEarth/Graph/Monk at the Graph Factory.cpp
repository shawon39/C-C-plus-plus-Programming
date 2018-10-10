#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int sum = 0;

    for(int i=0; i<n; i++) {
        int x; cin >> x;
        sum += x;
    }

    if( 2*(n-1) == sum ) cout << "Yes" <<endl;
    else cout << "No"<<endl;

    return 0;
}
