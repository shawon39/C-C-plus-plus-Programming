#include <bits/stdc++.h>
using namespace std;

#define mx 100001
int arr[mx];

struct info {
    int prop, sum;
} tree[mx * 3];

void init(int node, int st, int ed)
{
    if (st == ed) {
        tree[node].sum = arr[st];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (st + ed) / 2;
    init(Left, st, mid);
    init(Right, mid + 1, ed);
    tree[node].sum = tree[Left].sum + tree[Right].sum;
}

void update(int node, int st, int ed, int l, int r, int x)
{
    if (l > ed || r < st)
        return;
    if (st >= l && ed <= r)
    {
        tree[node].sum += ((ed - st + 1) * x);
        tree[node].prop += x;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (st + ed) / 2;
    update(Left, st, mid, l, r, x);
    update(Right, mid + 1, ed, l, r, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (ed - st + 1) * tree[node].prop;
}

int query(int node, int st, int ed, int l, int r, int carry = 0)
{
    if (l > ed || r < st)
        return 0;

    if (st >= l && ed <= r)
        return tree[node].sum + carry * (ed - st + 1);

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (st + ed) >> 1;

    int p1 = query(Left, st, mid, l, r, carry + tree[node].prop);
    int p2 = query(Right, mid + 1, ed, l, r, carry + tree[node].prop);

    return p1 + p2;
}

int main()
{
    int t; scanf("%d",&t);
    for(int i=1; i<=t; i++) {

        int n, q; cin >> n >> q;
        for(int j=1; j<=n; j++) {
            scanf("%d", &arr[j]);
        }
        init(1,1,n);
        printf("Case %d:\n", i);
        while(q--) {
            int type; scanf("%d", &type);
            if( type == 1 ) {
               int x, y, z; scanf("%d%d%d", &x, &y, &z);
               update(1, 1, n, x+1, y+1, z);
               printf("%d\n", query(1, 1, n, x+1, y+1));
            }
            else if(type == 2 ){
               int x, y; scanf("%d%d", &x, &y);
               printf("%d\n", query(1, 1, n, x+1, y+1));
            }
        }
    }

    return 0;
}

/*

5
10 10
1 1 1 1 2 2 2 2 3 3
*/
