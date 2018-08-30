#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v2){ cout << x << " "; } cout << endl;

int main()
{
    fast; int n; cin >>n;
    vector<int>v;
    while(n--) {
        int a; cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int sum=0, sum2=0;
    for(int i=v.size()-1; i>=0; i--) {
        if(sum>sum2) sum2 += v[i];
        else sum += v[i];
    }
    cout << abs(sum-sum2) <<endl;
    return 0;
}
