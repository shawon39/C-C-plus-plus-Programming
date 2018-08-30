#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v2){ cout << x << " "; } cout << endl;

int main()
{
    fast; int test; cin >> test;

    for(int j=1; j<=test; j++) {
        int n; cin >> n;
        long long int ans = 0;
        cout << "Case " << j << ":" << endl;
        for(int i=1; i<=n; i++) {
            string str;
            cin >> str;
            if(str == "donate") {
                int amount;
                cin >> amount;
                ans += amount;
            }
            else {
                cout << ans <<endl;
            }
        }
    }
    return 0;
}

