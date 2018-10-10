#include <bits/stdc++.h>
using namespace std;

vector< pair<int,int> >adj[1005];
int val[1005];

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++) cin >> val[i];

    for(int i=1; i<=m; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back( make_pair( val[y], y ) );
        adj[y].push_back( make_pair( val[x], x ) );
    }

    for(int i=1; i<=n; i++) {
        sort( adj[i].begin(), adj[i].end() );
    }

    for(int i=1; i<=n; i++) {
        if( adj[i].size() >= k ) {
            cout << adj[i][adj[i].size()-k].second <<endl;
        }
        else {
            cout << -1 <<endl;
        }
    }
    return 0;
}
