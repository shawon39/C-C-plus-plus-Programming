#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;

int main()
{
    fast; int test; cin >> test;

    for(int i=1; i<=test; i++) {
        int n, p, q; cin >> n >> p >> q;
        int sum = 0, cnt = 0, lol = 0;
        for(int j=1; j<=n; j++) {
            int w; cin >> w;
            lol++;
            if( sum + w <= q && p >= lol ) {
                cnt++;
                sum += w;
            }
        }
        cout << "Case " << i << ": " << cnt << endl;
    }
    return 0;
}
