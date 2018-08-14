#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int arr[105]={0};
    set<int>s;

    for(int i=0; i<n; i++)
    {
        int a,b;
        cin >> a >> b;

        for(int j=a; j<=b; j++)
        {
            arr[j] = -1;
        }
    }

    for(int i=1; i<=m; i++)
    {
        if( arr[i] != -1 )
        {
            s.insert(i);
        }
    }

    cout << s.size() <<endl;

    for(auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
