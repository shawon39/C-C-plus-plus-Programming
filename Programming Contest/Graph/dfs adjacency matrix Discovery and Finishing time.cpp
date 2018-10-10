#include <bits/stdc++.h>
using namespace std;
#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int color[100];
int node, edge;
int Time = 1;
int stime[100], Etime[100];

int dfsVisit(int x)
{
    color[x] = GRAY;
    stime[x] = Time++;

    for(int i=0; i<node; i++) {
        if(adj[x][i] == 1) {
            if( color[i] == WHITE ) {
                dfsVisit(i);
            }
        }
    }

    color[x] = BLACK;
    Etime[x] = Time++;
}

int dfs()
{
    for(int i=0; i<node; i++) color[i] = WHITE;

    for(int i=0; i<node; i++) {
        if(color[i] == WHITE) {
            dfsVisit(i);
        }
    }
}

int main()
{
    cin >> node >> edge;

    for(int i=0; i<edge; i++) {
        int x,y; cin >> x >> y;
        adj[x][y] = 1;
        adj[y][x] = 1;
    }
    dfs();

    cout << "\n";
    for(int i=0; i<node; i++) {
        cout << i <<" : "<< stime[i] << " - " << Etime[i] << endl;
    }
    return 0;
}

/*

5 6
0 1
2 3
4 3
1 3
2 4
0 4

*/

