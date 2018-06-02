#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin >> n;
    while(n--)
    {
        cin >> a;

        if( a==1 || a==2 || a==4 || a==5 || a==8 || a==11)
        {
            cout << "NO" <<endl;
        }
        else  cout << "YES" <<endl;

    }
    return 0;
}


