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

    int mnA=1e9, mnB=1e9, mnC=1e9, mnAB=1e9, mnBC=1e9, mnAC=1e9, mnABC=1e9, mn=1e9;

    for(auto x : mp ) {
        if( x.ff == "A" ) {
            mnA = min( mnA, x.ss );
        }
        else if( x.ff == "B" ) {
            mnB = min( mnB, x.ss );
        }
        else if( x.ff == "C" ) {
            mnC = min( mnC, x.ss );
        }
        else if( x.ff == "AB" ) {
            mnAB = min( mnAB, x.ss );
        }
        else if( x.ff == "BC" ) {
            mnBC = min( mnBC, x.ss );
        }
        else if( x.ff == "AC" ) {
            mnAC = min( mnAC, x.ss );
        }
        else if( x.ff == "ABC" ) {
            mnABC = min( mnABC, x.ss );
        }
    }

    if( mnA != 1e9 && mnB != 1e9 &&mnC != 1e9 ) {
        mn = min( mn, mnA + mnB + mnC );
    }
    if( mnA != 1e9 && mnBC != 1e9 ) {
        mn = min( mn, mnA + mnBC );
    }
    if( mnB != 1e9 && mnAC != 1e9 ) {
        mn = min( mn, mnB + mnAC );
    }
    if( mnC != 1e9 && mnAB != 1e9 ) {
        mn = min( mn, mnC + mnAB );
    }
    if( mnABC != 1e9 ) {
        mn = min( mn, mnABC );
    }
    if( mnAB != 1e9 && mnBC != 1e9 ) {
        mn = min( mn, mnBC + mnAB );
    }
    if( mnAB != 1e9 && mnAC != 1e9 ) {
        mn = min( mn, mnAC + mnAB );
    }
    if( mnBC != 1e9 && mnAC != 1e9 ) {
        mn = min( mn, mnBC + mnAC );
    }

    if(mn == 1e9) cout << -1 <<endl;
    else cout << mn <<endl;

    //main();
    return 0;
}




