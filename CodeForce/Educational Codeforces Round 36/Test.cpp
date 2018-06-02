#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<set>
#include<stack>

#define rFOR(i,x,y) for(int i = x; i >= y; --i)
#define FOR(i,x,y) for(int i = x; i <= y; ++i)
#define pb push_back
#define c(x) cout << x
#define F first
#define S second
#define task "A"
#define ln length

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pi;

const ll MOD = 1e9 + 7;
const ll MAXN = 1e6 + 5;
const ll INF = (1ll << 31);
const double PI = 3.14159265359;

int n, pos, l, r, ans;

main(){
	//freopen(task".in", "r", stdin);
	//freopen(task".out", "w", stdout);
	ios_base::sync_with_stdio(false);
    cin >> n >> pos >> l >> r;
    if(r - l + 1 == n){
        cout << "0";
        return 0;
    }
    if(pos  > r && pos > l){
        if(r != n)
            ans += pos-r+1, pos = r;
        if(l != 1)
        ans += r - l + 1;
        cout << ans;
        return 0;
    }
    if(pos < r && pos < l){
        if(l != 1)
        ans += l - pos + 1, pos = l;
        if(r != n)
        ans += r - l + 1;
        cout << ans;
        return 0;
    }
    if(l != 1)
        ans += pos - l+1, pos = l;
    if(r != n)
        ans += r - pos+1;
    cout << ans;
}
