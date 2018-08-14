#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int

vector<ll>v;
vector<ll>v2;

vector<ll>v3;
vector<ll>v4;

int main()
{
    fast;
    int n; cin >> n;
    string str, str2;
    cin >> str >> str2;

    long long int x=0,y=0,z=0,one=0;

    for(int i=0; i<n; i++)
    {
        if( str[i] == '0' && str2[i] == '0' )
        {
            x++;
        }
        if( str[i] == '1' && str2[i] == '0' )
        {
            y++;
        }
        if( str[i] == '0' && str2[i] == '1' )
        {
            z++;
        }

        if(str[i] == '1') one++;
    }

    long long res;

    res = (one * x) + (z * y);

    cout << res <<endl;

    return 0;

}

