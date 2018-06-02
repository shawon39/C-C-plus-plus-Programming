#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,s,p;
    cin >> k >> n >> s >> p;

    int r = n/s;
    if(n%s)r++;

    int m = r * k;

    int res = m / p;
    if(m%p) res++;

    cout << res <<endl;

    //main();

    return 0;
}

