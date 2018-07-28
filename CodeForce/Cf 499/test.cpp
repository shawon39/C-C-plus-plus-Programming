#include<bits/stdc++.h>
using namespace std;

int n, m;
int ans = 0;
int a[105];

int main()
{
    memset(a, 0, sizeof(a));
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }

    for(int i = 1; i <= 100; i++)
    {
        int s = 0;
        ans = i;
        for(int j = 1; j <= 100; j++)
        {
            s += (a[j] / i);
        }
        if(s < n)
        {
            ans = i-1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
