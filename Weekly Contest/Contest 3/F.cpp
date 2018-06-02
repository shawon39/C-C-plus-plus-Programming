#include <bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf
#define nl printf("\n")
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define for1(i, x, y) for(int i=(x); i<(y); i++)
#define for2(i, x, y) for(int i=(x-1); i>=(y); i--)
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")
#define murikha return 0

bool myfun(int a, int b){
    return a<b;
}

struct greaterr
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};
//sort(v.begin(), v.end(), greaterr());
//v.erase (v.begin());


int main()
{
    long long int n,a, ans = 0; cin >> n;
    vector<long long int> v,v2;

    for(long long int i=0; i<n; i++) {
        cin >> a; v.push_back(a);
    }
    for(long long int i=0; i<n; i+=2) {

        v2.push_back( max( v[i], v[i+1] ) );

        ans += abs(v[i] - v[i+1]);

        if( v.size() == 2 ) break;

        if( i == n-2 ) {
            i = -2; n /= 2;
            v = v2;
            v2.clear();
        }
    }
    cout << ans <<endl;
    return 0;
}


/*

#include <bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf
#define nl printf("\n")
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define for1(i, x, y) for(int i=(x); i<(y); i++)
#define for2(i, x, y) for(int i=(x-1); i>=(y); i--)
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")
#define murikha return 0

bool myfun(int a, int b){
    return a<b;
}

struct greaterr
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};
//sort(v.begin(), v.end(), greaterr());
//v.erase (v.begin());


int main()
{
    long long int n,a, ans = 0; cin >> n;
    vector<long long int> v,v2;

    for(long long int i=0; i<n; i++) {
        cin >> a; v.push_back(a);
    }

    while( v.size() > 1 ) {

        for(long long int i=0; i<n; i+=2) {

            v2.push_back( max( v[i], v[i+1] ) );

            ans += abs(v[i] - v[i+1]);
        }
        n /= 2;
        v = v2;
        v2.clear();
    }
    cout << ans <<endl;
    return 0;
}


*/
