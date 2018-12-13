// Not complete

#include <bits/stdc++.h>
using namespace std;

#define mx 100001
int arr[mx];
int ans = 0;

struct info {
    int prop, sum, mod;
} tree[mx * 3];

void update(int node, int st, int ed, int l, int r, int x)
{
    if (l > ed || r < st)
        return;
    if (st >= l && ed <= r)
    {
        tree[node].sum += ((ed - st + 1) * x);
        tree[node].prop += x;
        int lol = (tree[node].sum +((ed - st + 1) * x));
        if(lol%3==0) tree[node].mod += 1;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (st + ed) / 2;
    update(Left, st, mid, l, r, x);
    update(Right, mid + 1, ed, l, r, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (ed - st + 1) * tree[node].prop;
    int bal = (tree[Left].sum + tree[Right].sum + (ed - st + 1) * tree[node].prop);
    if(bal%3==0) tree[node].mod += (tree[Left].mod + tree[Left].mod);
}

int query(int node, int st, int ed, int l, int r, int carry = 0)
{
    if (l > ed || r < st)
        return 0;

    if (st >= l && ed <= r) {
        return tree[node].sum + carry * (ed - st + 1);
    }


    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (st + ed) >> 1;

    int p1 = query(Left, st, mid, l, r, carry + tree[node].prop);
    int p2 = query(Right, mid + 1, ed, l, r, carry + tree[node].prop);

    if(p1%3==0) tree[Left].mod += 1;
    if(p2%3==0) tree[Right].mod += 1;

    return p1 + p2;
}

int main()
{

        int n, q; cin >> n >> q;

        while(q--) {
            int type; scanf("%d", &type);
            if( type == 0 ) {
               int x, y; scanf("%d%d", &x, &y);
               update(1, 1, n, x+1, y+1, 1);
            }
            else if(type == 1 ){
               int x, y; scanf("%d%d", &x, &y);
               printf("%d\n", query(1, 1, n, x+1, y+1));
            }
        }

    return 0;
}

/*

5
10 10
1 1 1 1 2 2 2 2 3 3
*/

