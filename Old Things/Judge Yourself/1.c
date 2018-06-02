
//
//  Created by  CQU_CST_WuErli
//  Copyright (c) 2016 CQU_CST_WuErli. All rights reserved.
//
//#pragma comment(linker, "/STACK:102400000,102400000")
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <algorithm>
#include <sstream>
#define CLR(x) memset(x,0,sizeof(x))
#define OFF(x) memset(x,-1,sizeof(x))
#define MEM(x,a) memset((x),(a),sizeof(x))
#define BUG cout << "I am here" << endl
#define lookln(x) cout << #x << "=" << x << endl
#define SI(a) scanf("%d", &a)
#define SII(a,b) scanf("%d%d", &a, &b)
#define SIII(a,b,c) scanf("%d%d%d", &a, &b, &c)
const int INF_INT=0x3f3f3f3f;
const long long INF_LL=0x7f7f7f7f;
const int MOD=1e9+7;
const double eps=1e-10;
const double pi=acos(-1);
typedef long long  ll;
using namespace std;
const int N = 200200;
int n, m, q;
int u[N], v[N];
struct Query {
	int l, r, s, t, id;
	Query(int l, int r, int s, int t, int id):l(l), r(r), s(s), t(t), id(id) {}
	Query() {}
	bool operator < (const Query& rhs) const {
		return l > rhs.l;
	}
};
vector<Query> qs;
int dp[1010][1010];
int ans[N];
int main(int argc, char const *argv[]) {
#ifdef LOCAL
    freopen("C:\\Users\\john\\Desktop\\in.txt","r",stdin);
    // freopen("C:\\Users\\john\\Desktop\\out.txt","w",stdout);
#endif
    SIII(n, m, q);
    for (int i = 1; i <= m; i++)
    	SII(u[i], v[i]);
    for (int i = 1; i <= q; i++) {
    	int l, r, s, t;
    	SII(l, r);
    	SII(s, t);
    	qs.emplace_back(l, r, s, t, i);
    }
    sort(qs.begin(), qs.end());
    MEM(dp, INF_INT);
    for (int i = 1; i <= n; i++)
    	dp[i][i] = 0;
  	int cnt = 0;
    for (int i = m; i >= 1; i--) {
    	dp[u[i]][v[i]] = dp[v[i]][u[i]] = i;
    	for (int j = 1; j <= n; j++) {
    		if (j != u[i]) dp[v[i]][j] = min(dp[v[i]][j], dp[u[i]][j]);
    		if (j != v[i]) dp[u[i]][j] = min(dp[u[i]][j], dp[v[i]][j]);
    	}
    	while (cnt < qs.size() && qs[cnt].l >= i) {
    		ans[qs[cnt].id] = dp[qs[cnt].s][qs[cnt].t] <= qs[cnt].r;
    		cnt++;
    	}
    }
    for (int i = 1; i <= q; i++)
    	puts(ans[i] ? "Yes" : "No");
	return 0;
}
/*
