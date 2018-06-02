#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,x,y,mx=-100000000;
    cin >> n;

    while(n--)
    {
        cin >> a;
        x = sqrt(a);
        if( x*x == a ){
            continue;
        }
        mx = max(mx,a);
    }
    cout << mx <<endl;
    return 0;
}
