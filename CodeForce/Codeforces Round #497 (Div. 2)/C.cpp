#include <bits/stdc++.h>
using namespace std;

void inputAndOutput()
{
    #ifndef ONLINE_JUDGE
    freopen("D:\\Testing\\input.txt", "r", stdin);
    freopen("D:\\Testing\\output.txt", "w", stdout);
    #endif
}


int main()
{
    //inputAndOutput();

    int n; cin >> n;
    int arr[n+5];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    sort(arr, arr+n);

    for(int i=0, j=0; i<n && j<n; i,j)
    {
        if( arr[i] > arr[j] )
        {
        	ans++,i++, j++;
        }
        else {
        	i++;
        }
    }

    cout << ans <<endl;

    return 0;
}

