#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define pb    push_back
#define ppb   pop_back
#define mkp   make_pair
#define ff    first
#define ss    second
#define sf    scanf
#define pf    printf
#define nl    printf("\n")
#define yes   printf("YES\n")
#define no    printf("NO\n")
#define rt  return 0;
#define pf1(x)              printf("%d\n", x)
#define pf2(x, y)           printf("%d %d\n", x, y)
#define pf3(x, y, z)        printf("%d %d %d\n", x, y, z)
#define pl1(x)              printf("%lld\n", x)
#define pl2(x, y)           printf("%lld %lld\n", x, y)
#define pl3(x, y, z)        printf("%lld %lld %lld\n", x, y, z)
#define sci(x)              scanf("%d", &x)
#define scii(x, y)          scanf("%d %d", &x, &y)
#define sciii(x, y, z)      scanf("%d %d %d", &x, &y, &z)
#define scl(x)              scanf("%lld", &x)
#define scll(x, y)          scanf("%lld %lld", &x, &y)
#define sclll(x, y, z)      scanf("%lld %lld %lld", &x, &y, &z)
#define SQR(x)              ((x)*(x))
#define sortAll(c)              c.begin(), c.end()
#define TEST  {cout<<"Okay !"<<end; return;}
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v){ cout << x << " "; } cout << endl;
#define unq(v)              sort(ALL(v)), (v).erase(unique(ALL(v)),v.end())
#define common(a,b)         sort(ALL(a)), sort(ALL(b)), a.erase(set_intersection(ALL(a),ALL(b),a.begin()),a.end())
#define uncommon(a,b)       sort(ALL(a)), sort(ALL(b)), a.erase(set_symmetric_difference(ALL(a),ALL(b),a.begin()),a.end())
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
//int floop(int arr[], int n) { for(int i=0; i<n; i++) { cout << arr[i] << " "; } cout <<endl; }
//1e18 , -1e18, 1e9, -1e9

int phi[1000006], prime[1000006];
void sievephi(int n)
{
    for(int i=1; i<=n; i++) phi[i]=i;

    phi[1]=1;
    prime[1]=1;

    for(int i=2; i<=n; i++) {
        if(!prime[i])  {
            for(int j=i;j<=n; j+=i) {
                prime[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
}


set<int>s;

int primeFact(int n)
{
    while( n%2 == 0 ) {
    	s.insert(2);
    	n/=2;
    }
    for(int i=3; i*i<=n; i+=2) {
    	while( n%i == 0 ) {
    		s.insert(i);
    		n/=i;
    	}
    }
    if(n > 2) s.insert(n);
}

int main()
{
    int n; sci(n);
    primeFact(n);

    ll ans = n;
    for(auto x : s) {
        ans = ans - (ans/x);
    }
    pl1(ans);

    /// Another way

    sievephi(n);
    for(int i=1; i<=n; i++) {
        if(!prime[i]) {
            printf("%d ", i);
        }
    } nl;

    for(int i=1; i<=n; i++) {
        printf("%d = %d\n", i, phi[i]);
    }
    rt;
}









