#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v2){ cout << x << " "; } cout << endl;
#define ll long long int
//for(int i=1; i<=n; i++ ) { cout << arr[i] << " "; } cout << endl;

int binarySearch(int arr[], int n, int key)
{
    int left = 0, right = n-1, res = -1;

    while(left <= right)
    {
        int mid = left + (right-left)/2;
        if(arr[mid]==key) {
            res = mid;
            right = mid - 1;
        }
        else if( arr[mid] > key ) {
            right = mid-1;
        }
        else left = mid+1;
    }
    return res;
}

int main()
{
    //fast;
    int n,q; scanf("%d%d",&n,&q);
    int arr[n+5];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    while(q--) {
        int x; scanf("%d",&x);
        int res = binarySearch(arr,n,x);
        printf("%d\n", res);
    }
    return 0;
}
