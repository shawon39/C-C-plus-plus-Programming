#include <bits/stdc++.h>
using namespace std;

int l[5005], r[1005];

int main()
{
    int test; cin >> test;

    while(test--) {

         memset(l, 0, sizeof(l));
         memset(r, 0, sizeof(r));

         int n; cin >> n;

         for(int j=0; j<n; j++) {
            int a,b; cin >> a >> b;

            for(int i=a; i<=b; i++) {

                if(l[i] == 0) {

                    l[i] = 1;
                    r[j] = i;
                    break;
                }
            }
         }
         for(int i=0; i<n; i++) {cout << r[i] << " "; }
         cout << endl;
    }
    return 0;
}
