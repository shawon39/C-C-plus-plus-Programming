#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, x;
    cin >> n >> q >> x;

    for(int i=0; i<q; i++)
    {
        int a, b;
        cin >> a >> b;

        if( a == x ) x = b;
        else if( b == x ) x = a;

    }

    cout << x <<endl;

    return 0;

}
