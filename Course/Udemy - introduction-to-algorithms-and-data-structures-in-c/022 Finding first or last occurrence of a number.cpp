#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v){ cout << x << " "; } cout << endl;
//int floop(int arr[], int n) { for(int i=0; i<n; i++) { cout << arr[i] << " "; } cout <<endl; }

int binarySearch(int arr[], int n, int key)
{
    int left = 0, right = n-1, res = -1;

    while( left <= right ) {
        int mid = left + ( right - left )/2; // also (left+right)/2;

        if( arr[mid] == key ) {
            res = mid;
            //right =  mid-1; // First Occurrence
            left = mid + 1;   // Last Occurrence
        }
        else if( arr[mid] > key ) right = mid-1;
        else left = mid + 1;
    }
    return res;
}

int main()
{
    int arr[] = {1,4,7,7,7,7,8,8,8,9,10,12,12,12,13};

    int res = binarySearch(arr, 15, 8);

    if(res == -1) cout << "Not Found !" <<endl;
    //else cout << "First Occurrence: " << res << endl;
    else cout << "Last Occurrence: " << res << endl;

    return 0;
}

