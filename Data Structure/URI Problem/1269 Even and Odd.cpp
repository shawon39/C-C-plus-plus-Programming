#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int main()
{
    int n,a,k=0,j=0, arr[100005];
     cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);

    for(int i=0; i<n; i++){
       if(arr[i]%2==0) cout << arr[i] <<endl;
    }
     for(int i=n-1; i>=0; i--){
       if(arr[i]%2==1) cout << arr[i] <<endl;
    }

    return 0;
}



