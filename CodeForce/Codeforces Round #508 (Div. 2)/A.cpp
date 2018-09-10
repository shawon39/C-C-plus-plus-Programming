#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v){ cout << x << " "; } cout << endl;
//int floop(int arr[], int n) { for(int i=0; i<n; i++) { cout << arr[i] << " "; } cout <<endl; }

map<char, int>m;

int main()
{
    int n, k, ans,lol=1, mn=99999999;
    cin >> n >> k;
    string str; cin >> str;
    set<char> s;

    for(int i=0; i<n; i++)
    {
        ++m[str[i]];
        s.insert(str[i]);
    }

    if(s.size()!=k) {
        cout << 0 << endl; return 0;
    }

    for(auto x: m) {
        if(x.second==0) lol = 0;
        mn = min(x.second, mn);
    }

    if(lol==0) cout << 0 << endl;
    else cout << mn*k <<endl;

    return 0;
}

