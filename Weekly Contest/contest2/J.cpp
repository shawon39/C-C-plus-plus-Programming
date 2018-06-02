#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ct=0;
    cin >> n >> m;

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            if( i*i + j == n && i + j*j == m ) ct++;
        }
    }
    cout << ct <<endl;
    return 0;
}
