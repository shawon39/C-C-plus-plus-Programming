#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ff first
#define ss second

int main()
{
    fast; int n; cin >> n;
    multimap<string,int>mp;

    for(int i=0; i<n; i++)
    {
        int x; string str;
        cin >> x >> str;
        sort(str.begin(), str.end());
        mp.insert( make_pair(str, x) );
    }

    int A=1e9, B=1e9, C=1e9, AB=1e9, BC=1e9, AC=1e9, ABC=1e9, mn=1e9;

    for(auto x : mp ) {
        if( x.ff == "A" ) {
            A = min( A, x.ss );
        }
        else if( x.ff == "B" ) {
            B = min( B, x.ss );
        }
        else if( x.ff == "C" ) {
            C = min( C, x.ss );
        }
        else if( x.ff == "AB" ) {
            AB = min( AB, x.ss );
        }
        else if( x.ff == "BC" ) {
            BC = min( BC, x.ss );
        }
        else if( x.ff == "AC" ) {
            AC = min( AC, x.ss );
        }
        else if( x.ff == "ABC" ) {
            ABC = min( ABC, x.ss );
        }
    }

    if( A != 1e9 && B != 1e9 && C != 1e9 ) {
        mn = min( mn, A + B + C );
    }
    if( A != 1e9 && BC != 1e9 ) {
        mn = min( mn, A + BC );
    }
    if( B != 1e9 && AC != 1e9 ) {
        mn = min( mn, B + AC );
    }
    if( C != 1e9 && AB != 1e9 ) {
        mn = min( mn, C + AB );
    }
    if( ABC != 1e9 ) {
        mn = min( mn, ABC );
    }
    if( AB != 1e9 && BC != 1e9 ) {
        mn = min( mn, BC + AB );
    }
    if( AB != 1e9 && AC != 1e9 ) {
        mn = min( mn, AC + AB );
    }
    if( BC != 1e9 && AC != 1e9 ) {
        mn = min( mn, BC + AC );
    }

    if(mn == 1e9) cout << -1 <<endl;
    else cout << mn <<endl;

    //main();
    return 0;
}





