#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")

int main()
{
    fast;

    int n; cin >> n;
    vector<int>v;

    while(n--)
    {
        int x; cin >> x;
        v.push_back(x);
    }

    for(auto lol: v )
    {
        if(lol%2) cout << lol << " ";
        else cout << lol-1 << " ";
    }
    cout << endl;
    return 0;
}






