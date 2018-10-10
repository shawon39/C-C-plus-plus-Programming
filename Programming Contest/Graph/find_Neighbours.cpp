#include <bits/stdc++.h>
using namespace std;

int adj_list[100][100];

int main()
{
    int v,e; cin >> v >> e;

    for(int i=0; i<e; i++) {
        int x, y; cin >> x >> y;
        adj_list[x][y] = 1;
        adj_list[y][x] = 1;
    }

    /// find neighbours of 0
    for(int i=0; i<v; i++) {
        if( adj_list[0][i] == 1 ) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

