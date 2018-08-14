#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    long long int current = 0;
    while(n--)
    {
        int a; cin >> a;

        current += a;
        cout << current/m << " ";
        current %= m;
    }
    cout << endl;
    return 0;
}


