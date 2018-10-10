#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int cnt  = 0;

    while(n)
    {
        cnt += n & 1;
        n >>= 1;
    }

    count << cnt <<endl;

    return 0;
}

