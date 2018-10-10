#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(1) {
        int n; cin >> n;
        if(n==0) break;

        int p,q; cin >> p >> q;
        int x[205], y[205], mark=0;
        double res[40005];

        for(int i=0; i<n; i++) {
            cin >> x[i] >> y[i];
        }

        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                res[mark++] = sqrt(pow((x[i]*1.0-y[j]*1.0),2) + (pow((x[i]*1.0-y[j]*1.0),2)));
            }
        }

        for(int i=0; i<mark; i++) {
            cout << res[i] << endl;
        }

    }
}

