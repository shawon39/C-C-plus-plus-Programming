#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;

    while(test--)
    {
        int n; cin >> n;

        string str; cin >> str; int ck = 0;

        for(int i=0, j = n-1; i<=(n-2)/2; i++, j--)
        {
                 if( str[i]-1 == str[j]-1 ) ck = 1;
            else if( str[i]-1 == str[j]+1 ) ck = 1;
            else if( str[i]+1 == str[j]-1 ) ck = 1;
            else if( str[i]+1 == str[j]+1 ) ck = 1;
            else
            {
                ck = 0;
                break;
            }
        }

        if( ck ) cout << "YES" <<endl;
        else cout << "NO" <<endl;

    }
    return 0;
}
