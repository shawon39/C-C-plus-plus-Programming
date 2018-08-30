#include <bits/stdc++.h>
using namespace std;
// #include <bits/stdtr1c++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

/// Typedef
typedef long long           ll;
typedef unsigned long       ul;
typedef unsigned long long  ull;
typedef vector<int>         vi;
typedef vector<vi>          vvi;
typedef vector<ll>          vll;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef vector< pii >       vii;

#define pb                  push_back
#define ppb                 pop_back
#define MP                  make_pair
#define ff                  first
#define ss                  second
#define sf                  scanf
#define pf                  printf
#define SQR(x)              ((x)*(x))
#define loop(i, y)          for(int i=0; i<int(y); i++)
#define FOR(i, x, y)        for(int i=int(x); i<int(y); i++)
#define ROF(i, x, y)        for(int i=int(y-1); i>=int(x); i--)
#define ALL(c)              c.begin(), c.end()
#define SZ(c)               int(c.size())
#define CLR(x, y)           memset(x, y, sizeof(x))
#define READ(f)             freopen(f, "r", stdin)
#define WRITE(f)            freopen(f, "w", stdout)
#define si(x)               scanf("%d", &x)
#define sii(x, y)           scanf("%d %d", &x, &y)
#define siii(x, y, z)       scanf("%d %d %d", &x, &y, &z)
#define sl(x)               scanf("%lld", &x)
#define sll(x, y)           scanf("%lld %lld", &x, &y)
#define slll(x, y, z)       scanf("%lld %lld %lld", &x, &y, &z)
#define FastIO              ios_base::sync_with_stdio(false)
#define FixedPrecision(x)   ios_base::sync_with_stdio(false); cout.setf(ios::fixed); cout.precision(x); cin.tie(0);
#define bitCheck(N,in)      ((bool)(N&(1LL<<(in))))
#define bitOff(N,in)        (N&(~(1LL<<(in))))
#define bitOn(N,in)         (N|(1LL<<(in)))
#define bitFlip(a,k)        (a^(1LL<<(k)))
#define popCount(x)         __builtin_popcount(x)
#define int2Bin(x, y)       bitset<y> z=x; cout<<z.to_string()<<endl;
#define tr(it, container)   for(auto it = container.begin(); it != container.end(); it++)
#define unq(v)              (v).erase(unique(ALL(v)),v.end())
#define common(a,b)         sort(ALL(a)), sort(ALL(b)), a.erase(set_intersection(ALL(a),ALL(b),a.begin()),a.end())
#define uncommon(a,b)       sort(ALL(a)), sort(ALL(b)), a.erase(set_symmetric_difference(ALL(a),ALL(b),a.begin()),a.end())
#define DB(x)               cout << #x << " = " << x << endl
#define DDB(x,y)            cout << #x << " = " << x << "   " << #y << " = " << y << endl
#define DDDB(x,y,z)         cout << #x << " = " << x << "   " << #y << " = " << y << "   " << #z << " = " << z << endl
/// template <typename T> using orderset = tree <T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
/// *X.find_by_order(k) //returns the kth largest element.(0-based)
/// X.order_of_key(val) //returns the no. of values less than val

/// uniform random generator -->
/// uniform_int_distribution<int> dist(0, 1);
/// default_random_engine gen;

template <class T> inline T bigMod(T p,T e,T M){ ll ret = 1; for(; e > 0; e >>= 1){ if(e & 1) ret = (ret * p) % M; p = (p * p) % M; } return (T) ret;}
template <class T> inline T modInverse(T a,T M){return bigMod(a,M-2,M);}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
template <class T> inline string int2String(T a){ostringstream str; str<<a; return str.str();}
template <class T> inline T string2int(string a){stringstream str(a); T b; str>>b; return b;}
const int dr[] = { 0,  1,  0, -1,   -1,  1,  1, -1,   -2, -2,  2,  2, -1, -1,  1,  1};
const int dc[] = { 1,  0, -1,  0,    1,  1, -1, -1,   -1,  1, -1,  1, -2,  2, -2,  2};

/// Constants
#define MAX                 200005
#define MOD                 1000000009
#define base                1000000007
#define eps                 1e-9
#define INF                 1llu<<61    // 2,305,843,009,213,693,952
#define inf                 1<<29       // 536,870,912
#define PI                  acos(-1.0)  // 3.1415926535897932

int main(){
    /*#ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/
    int t; si(t); while(t--){
        int n;
        string s;
        cin>>n>>s;
        int f=1;
        for(int i=0, j=s.size()-1; i<j; i++, j--){
            if(s[i]==s[j]) continue;
            int f2=0;
            for(char k=s[i]-1; k<=s[i]+1; k++){
                for(char l=s[j]-1; l<=s[j]+1; l++){
                    if(k==s[i] or l==s[j]) continue;
                    if(isalpha(k) && isalpha(l) && k==l) f2=1;
                }
            }
            f&=f2;
        }
        printf("%s\n", f?"YES":"NO");
    }

    /*#ifndef ONLINE_JUDGE
        printf("\n>>Time taken: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif*/
    return 0;
}
