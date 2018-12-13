#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int main()
{
    int x,y,z, ans=-1; cin >> x;

    for(int i=1; i<=x; i++) {
        for(int j=1; j<=x; j++) {
            if( i%j==0 ) {
                if( i*j > x && (i/j) < x ) {
                    cout << i << " " << j << endl;
                    return 0;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
