#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>


using namespace std;
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;

        vector < pair < int , int > > v;
        vector < pair < int , int > > v2;

        for(int i=0; i<n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back( make_pair(a,b) );
        }

        for(int i=0; i<q; i++)
        {
            int a, b;
            cin >> a >> b;
            v2.push_back( make_pair(a,b) );
        }

        for(int i=0; i<n-1; i++)
        {
            int mn = min( v[i].first, min(v[i].second, min(v2[i].first, min(v2[i].second, min(v[i+1].first,v[i+1].second ) ) ) ) );
            int mx = max( v[i].first, max(v[i].second, max(v2[i].first, max(v2[i].second, max(v[i+1].first,v[i+1].second ) ) ) ) );

            int cnt = 0;
            for(int j=mn+1; j<=mx-1; j++)
            {
                if( v[i].first != j && v[i].second != j && v2[i].first != j && v2[i].second != j && v[i+1].first != j && v[i+1].second != j ) cnt++;
            }
            cout << cnt <<endl;
        }
        cout << 0 << endl;

    }

    return 0;
}
