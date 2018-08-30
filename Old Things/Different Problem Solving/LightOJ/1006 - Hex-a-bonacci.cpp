#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int area[10010];
    int caseno = 0,cases,m,n;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %d", &area[0], &area[1], &area[2], &area[3], &area[4], &area[5], &n);

        for(m=6; m<=n; m++)
        {
            area[m]= ( area[m-1] + area[m-2] + area[m-3] + area[m-4] + area[m-5] + area[m-6] )%10000007;
        }

        printf("Case %d: %lld\n", ++caseno, area[n]  % 10000007);
    }
    return 0;
}

