#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int sum = 0;
    while( n ) {
        sum = sum*10 + (n%10);
        n /= 10;
    }
    return sum;
}

int main()
{
    int test; scanf("%d", &test);

    for(int i=1; i<=test; i++) {
        int n; scanf("%d", &n);

        if( solve(n) == n ) {
            printf("Case %d: Yes\n", i);
        }
        else {
            printf("Case %d: No\n", i);
        }
    }
    return 0;
}

