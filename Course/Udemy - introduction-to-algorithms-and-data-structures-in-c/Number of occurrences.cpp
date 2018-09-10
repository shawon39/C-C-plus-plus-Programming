#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v){ cout << x << " "; } cout << endl;
//int floop(int arr[], int n) { for(int i=0; i<n; i++) { cout << arr[i] << " "; } cout <<endl; }

int binarySearch(int arr[], int n, int key, int check)
{
    int left = 0, right = n-1, res = -1;

    while( left <= right ) {
        int mid = left + ( right - left )/2; // also (left+right)/2;

        if( arr[mid] == key ) {
            res = mid;
            if(check==1) right =  mid-1; // First Occurrence
            if(check==2) left = mid + 1;   // Last Occurrence
        }
        else if( arr[mid] > key ) right = mid-1;
        else left = mid + 1;
    }
    return res;
}

int main()
{
    int arr[] = {1,4,7,7,7,7,8,8,8,9,10,12,12,12,13};

    int firstOccurrence = binarySearch(arr, 15, 80, 1);
    int lastOccurrence = binarySearch(arr, 15, 80, 2);

    if(firstOccurrence==-1) cout << "Number is not occurrence !" <<endl;
    else cout << lastOccurrence-firstOccurrence+1 << " times Occurrence!" << endl;

    return 0;
}


