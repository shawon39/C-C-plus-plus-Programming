#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
int arr[1000005];
int main()
{
    fast;

    int n,mark=0, mx=0;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        mx = max(mx,arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==mx){
            mark++;
        }
    }
    if(mark%2==0) cout << "Agasa" <<endl;
    else cout << "Conan" <<endl;
    return 0;
}

