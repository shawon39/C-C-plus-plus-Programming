#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, a, b, k;
    cin >> n >> h >> a >> b >> k;

    while(k--)
    {
        int t,f, t2, f2;
        cin >> t >> f >> t2 >> f2;

        if( t == t2 )
        {
            cout << abs(f-f2) <<endl;
        }
        else if( f >= a && f <= b )
        {
            cout << abs(t-t2) + abs(f-f2) <<endl;
        }
        else
        {
            int lol = abs(a-f);
            int lol2 = abs(b-f);

            if( lol < lol2 )
            {
                cout << lol + abs(t-t2) +  abs(a-f2) <<endl;
            }
            else
            {
                cout << lol2 + abs(t-t2) +  abs(b-f2) <<endl;
            }
        }
    }
    return 0;
}
