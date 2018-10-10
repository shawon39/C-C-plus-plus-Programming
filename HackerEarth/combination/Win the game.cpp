#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test; scanf("%d", &test);
    while(test--) {
        int n; scanf("%d", &n);
        int cnt = 0, lol=n+1;

        while(n)
        {
            if(n%2) cnt++;
            n >>= 1; // n/=2;
        }
        int ans = pow(2,cnt);
        printf("%d %d\n", lol-ans ,ans);
    }
    return 0;
}
