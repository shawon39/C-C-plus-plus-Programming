#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
int arr[1000005];
int main()
{
    fast;

    int n,mark=0, mx=0,x;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> x;
        arr[x]++;
    }

    for(int i=0; i<100005; i++)
    {
        if(arr[i] %2 == 1){
            mark=1;
            break;
        }
    }
    if(mark==0) cout << "Agasa" <<endl;
    else cout << "Conan" <<endl;
    return 0;
}

