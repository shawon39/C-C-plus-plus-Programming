#include <bits/stdc++.h>
using namespace std;

#define mx 100001
int arr[mx];
int tree[mx * 3];

void init(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        if( newvalue == 0 ) {
            tree[node] = 0;
            return;
        }
        else {
            tree[node] += newvalue;
            return;
        }

    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}

int main()
{
    int t; scanf("%d",&t);
    for(int i=1; i<=t; i++) {

        memset(arr, 0, sizeof(arr));
        memset(tree, 0, sizeof(tree));

        int n, q; cin >> n >> q;
        for(int j=1; j<=n; j++) {
            scanf("%d", &arr[j]);
        }
        init(1,1,n);
        printf("Case %d:\n", i);
        while(q--) {
            int type; scanf("%d", &type);
            if( type == 1 ) {
                int x; scanf("%d", &x);
                printf("%d\n", query(1, 1, n, x+1, x+1));
                update(1, 1, n, x+1, 0);
            }
            else if( type == 2 ) {
               int x, y; scanf("%d%d", &x, &y);
               update(1, 1, n, x+1, y);
            }
            else {
               int x, y; scanf("%d%d", &x, &y);
               printf("%d\n", query(1, 1, n, x+1, y+1));
            }
        }
    }

    return 0;
}

