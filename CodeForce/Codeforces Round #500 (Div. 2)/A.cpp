#include <bits/stdc++.h>
using namespace std;

#define yes cout << "Yes" <<endl
#define no cout << "No" <<endl

int main()
{
    int n, ans = 1; cin >> n;
    int a[51], b[51];

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    int sum=0, sum2=0;
    for(int i=0; i<n; i++)
    {
        sum += a[i];
        sum2 += b[i];
    }

    sum >= sum2 ? yes : no;

    return 0;
}
