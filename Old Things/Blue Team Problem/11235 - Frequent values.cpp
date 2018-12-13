// Not Accepted  !

#include <bits/stdc++.h>
using namespace std;

#define mx 100001
int arr[mx];
int ct[mx];
int tree[mx * 3];
int ans[mx * 3];

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
    //tree[node] = tree[Left] + tree[Right];
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

int main()
{
    while(1) {

        memset(arr, 0, sizeof(arr));
        memset(tree, 0, sizeof(tree));

        int n, q;
        scanf("%d", &n);
        if(!n) break;
        scanf("%d", &q);
        for(int j=1; j<=n; j++) {
            scanf("%d", &arr[j]);
        }
        init(1,1,n);
        while(q--) {

            int x, y; scanf("%d%d", &x, &y);
            printf("%d\n",query(1,1,n,x,y));

            for(int i=1; i<=10; i++) {
                //cout << " " << ct[i] << endl;
            }
        }
    }

    return 0;
}


