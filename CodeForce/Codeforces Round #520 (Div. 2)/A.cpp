#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int ar[n+5];
    for(int i=0; i<n; i++) {
        cin >> ar[i];
    }
    int ct = 0, mx=0;
    for(int i=0; i<n-1; i++) {
        if( ar[i]+1 == ar[i+1] ) {
            ct++;
        }
        else {
            mx = max(ct-1, mx);
            ct = 0;
        }
    }
    mx = max(ct-1, mx);

    if(ar[0]==1) {
        ct = 0;
        for(int i=0; i<n-1; i++) {
            if(ar[i]+1 == ar[i+1]) {
                ct++;
            }
            else {
                break;
            }
        }
        mx = max(ct,mx);
    }

    if(ar[n-1]==1000) {
        ct = 0;
        for(int i=n-1; i>0; i--) {
            if(ar[i]-1 == ar[i-1]) {
                ct++;
            }
            else {
                break;
            }
        }
        mx = max(ct,mx);
    }
    cout << mx << endl;
   // main();
    return 0;
}

