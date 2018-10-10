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
#define unique(v)           sort(ALL(v)), (v).erase(unique(ALL(v)),v.end())
#define common(a,b)         sort(ALL(a)), sort(ALL(b)), a.erase(set_intersection(ALL(a),ALL(b),a.begin()),a.end())
#define uncommon(a,b)       sort(ALL(a)), sort(ALL(b)), a.erase(set_symmetric_difference(ALL(a),ALL(b),a.begin()),a.end())
//int floop(int arr[], int n) { for(int i=0; i<n; i++) { cout << arr[i] << " "; } cout <<endl; }
//1e18 , -1e18, 1e9, -1e9

vector<int>divisors[1000002];

int alldivisor(int n)
{
    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n; j+=i) {
            divisors[j].push_back(i);
        }
    }
}

int main()
{
    int n; sf("%d", &n);
    alldivisor(n);
    for(int i=1; i<=n; i++) {
        pf("Divisor of %d = ", i);
        for(int j=0; j<divisors[i].size(); j++) {
            cout << divisors[i][j] << " ";
        } nl;
    }
}
