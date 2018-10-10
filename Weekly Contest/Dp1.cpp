#include <bits/stdc++.h>
using namespace std;

#define TEST  {cout<<"Okay !"<<end; return;}
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;

vector<int>v;
int dp[300005];

int main()
{
    fast; int n, p;
    cin >> n >> p;

    for(int i=0; i<n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    int mx = 0;
    for(int i = p; i<v.size(); i++ ){

        dp[i] =  v[i] + dp[i-p];
        dp[i] = max(dp[i], dp[i-1]);
    }

    cout << dp[n-1] <<endl;

    return 0;
}
