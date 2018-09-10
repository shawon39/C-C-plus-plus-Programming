#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k; cin >> n >> k;

    if(n>=k) cout << 1 << endl;
    else if( k%n == 0 ) cout << k/n << endl;
    else cout << (k/n)+1 << endl;

    return 0;
}
