#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, j; cin >> n >> k;
    char str[1005]; string str2;

    for(int i=0; i<n; i++)
    {
        cin >> str[i];
    }
    sort(str, str+n);

    int ct = 0,v;
    for(int i=0; i<n; i++)
    {
        if( i == 0 )
        {
            str2 += str[i];
            v = 0;
            ct++;
            if(ct == k) break;
            else continue;
        }

        if( str[i] > str[v]+1 )
        {
            v = i;
            str2 += str[i];
            ct++;
            if(ct == k) break;
        }
    }
    int ans = 0;
    for(int i=0; i<str2.length(); i++)
    {
        ans += str2[i] - 96;
    }

    if( !ans or ct != k ) cout << -1 <<endl;
    else cout << ans <<endl;

    return 0;
}

