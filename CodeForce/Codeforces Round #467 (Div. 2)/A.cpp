#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin >> n;
    int ct = 0; set<int>s;
    for(int i=0; i<n; i++)
    {
        cin >> m;
        if(m) s.insert(m);
    }
    cout << s.size() <<endl;
    return 0;
}
