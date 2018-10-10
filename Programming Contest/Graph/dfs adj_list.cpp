#include <bits/stdc++.h>
using namespace std;

vector<int> adjlist[1000];
int visited[1000];

int dfs(int u)
{
    visited[u] = 1;

    for(auto v : adjlist[u]) {
        if( !visited[v] ) {
            dfs(v);
        }
    }
}

int main()
{
    int v,e; cin >> v >> e;

    for(int i=0; i<e; i++) {
        int x, y;
        cin >> x >> y;
        adjlist[x].push_back(y);
        adjlist[y].push_back(x);
    }
    dfs(0);

    for(int i=0; i<v; i++) {
        cout << visited[i] << " ";
    }
    cout << endl;
    return 0;
}


