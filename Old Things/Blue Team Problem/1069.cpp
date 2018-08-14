#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;

    for(int i=1; i<=test; i++)
    {
        int x, y, res; cin >> x >> y;
        res = abs(x-y) + x;
        res = res * 4 + 19 ;
        printf("Case %d: %d\n", i, res);
    }
    return 0;
}
