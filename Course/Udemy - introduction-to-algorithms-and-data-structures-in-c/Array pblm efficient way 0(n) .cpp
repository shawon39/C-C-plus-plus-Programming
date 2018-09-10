#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v){ cout << x << " "; } cout << endl;

int main()
{
    int n; cin >> n;
    vector<int>v;
    vector<int>v2(n+1, 0);

    for(int i=0; i<n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    int q; cin >> q;

    for(int i=1; i<=q; i++) {
        int l,r,x; cin >> l >> r >> x;
        v2[l-1] += x;                    // v2[l] += x;   = vector starting from 0
        v2[r] -= x;                      // v2[r+1] -= x; = vector starting from 0
    }
    int tot = 0;
    for(int i=0; i<n; i++) {
        tot += v2[i];
        v[i] += tot;
    }
    loop(v);
    return 0;
}

//6
//1 1 1 4 5 6
//2
//1 3 2
//4 6 1
