#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v){ cout << x << " "; } cout << endl;
//int floop(int arr[], int n) { for(int i=0; i<n; i++) { cout << arr[i] << " "; } cout <<endl; }

int main()
{
    fast;
    int n,w,b, res=1, ans=0;
    cin >> n >> w >> b;
    int arr[n+5];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    if(n==1) {
        if(arr[0]==2) {
            cout << min(w,b) <<endl;
        }
        else cout << 0 <<endl;

        return 0;
    }

    if(n%2)
    {
        for(int i=0, j=n-1; i<n/2; i++, j--)
        {
            if( arr[i] == arr[j] && arr[i] == 2 ) {
                ans = ans + min(w,b) + min(w,b);
            }
            else if( arr[i] == arr[j] )continue;
            else
            {
                if( arr[i] != 2  && arr[j] != 2 ) {
                    res = 0; break;
                }
                else if( arr[i] == 0 ) ans += w;
                else if( arr[i] == 1 ) ans += b;
                else if( arr[j] == 0 ) ans += w;
                else if( arr[j] == 1 ) ans += b;
            }
        }
        if(arr[n/2]==2) ans += min(w,b);
        if( res == 1 ) { cout << ( ans ) << endl; return 0; }
    }
    else
    {
        for(int i=0, j=n-1; i<n/2; i++, j--)
        {
            if( arr[i] == arr[j] && arr[i] == 2 ) {
                ans += min(w,b) + min(w,b);
            }
            else if( arr[i] == arr[j] )continue;
            else
            {
                if( arr[i] != 2  && arr[j] != 2 ) {
                    res = 0; break;
                }
                else if( arr[i] == 0 ) ans += w;
                else if( arr[i] == 1 ) ans += b;
                else if( arr[j] == 0 ) ans += w;
                else if( arr[j] == 1 ) ans += b;
            }
        }
    }
    if(res==0) cout << -1 <<endl;
    else cout << ans << endl;
    return 0;
}
