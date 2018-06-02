#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,n, sum = 0;
    cin >> n;

    while(n--)
    {
        cin >> a;
        sum += a;
    }

    if(sum%2) cout << 1 <<endl;
    else cout << 0 <<endl;

    return 0;
}
