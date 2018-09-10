#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v){ cout << x << " "; } cout << endl;
int floop(int arr[], int n) { for(int x=0; x<n; x++) { cout << arr[x] << " "; } cout <<endl; }

long long int arr[3000005];
long long int arr2[3000005];

int main()
{
    fast;
    long long int n; cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
    long long int m; cin >> m;
    for(int i=0; i<m; i++) cin >> arr2[i];

    long long int ans = 0, i=0, j=0;

    while( i < n && j < m )
    {
        if( arr[i] == arr2[j] ) {
            ans++;
            if( i == n-1 && j== m-1 ) break;
            i++; j++;
        }
        else if( arr[i] > arr2[j] )
        {
            if(j+1 == m ) { ans  = -1; break; }
            arr2[j+1] = arr2[j] + arr2[j+1];
            j++;
        }
        else if( arr[i] < arr2[j] )
        {
            if(i+1 == n ) { ans  = -1; break; }
            arr[i+1] = arr[i] + arr[i+1];
            i++;
        }

        if(j == m ) { ans  = -1; break; }
        if(i == n ) { ans  = -1; break; }
    }

    //floop(arr, n);
    //floop(arr2, m);

    cout << ans << endl;
}
