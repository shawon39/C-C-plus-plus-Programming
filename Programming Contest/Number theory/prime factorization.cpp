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
//int floop(int arr[], int n) { for(int i=0; i<n; i++) { cout << arr[i] << " "; } cout <<endl; }
//1e18 , -1e18, 1e9, -1e9

vector<int>v;

int primeFact(int n)
{
    while( n%2 == 0 ) {
    	v.pb(2);
    	n/=2;
    }
    for(int i=3; i*i<=n; i+=2) {
    	while( n%i == 0 ) {
    		v.pb(i);
    		n/=i;
    	}
    }
    if(n > 2) v.pb(n);
}

int main()
{
    int n; cin >> n;
    primeFact(n);
    loop(v);
    return 0;
}


