#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A1,L1, A2,L2, C, X,Y;

    cin >> A1 >> L1 >> A2 >> L2 >> C >> X >> Y;

    int ct = 0;
    while( C )
    {
        if( ct == 0 )
        {
            if( C >= X ) A1++;
            C -= X;
            ct = 1;
         }
         else {
            if( C >= Y )L1++;
            C -= Y;
            ct = 0;
         }
    }

    cout << A1 << L1 <<endl;

    return 0;
}

