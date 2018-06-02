#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x;
    cin >> a >> b >> c >> x;

    if(x <= 2*c )
    {
        if(x<=a || x*2 >= a ) cout << a <<endl;
        if(x<=b || x*2 >= b  ) cout << b <<endl;
        cout << c <<endl;
        return 0;
    }
    cout << -1 <<endl;
    return 0;
}
