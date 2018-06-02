#include <bits/stdc++.h>
using namespace std;

int n,k;
int arr[2000005];

int main()
{

    cin >> n >> k;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    if(k==0)
    {
        if(arr[0]-1 > 0){
            cout << arr[0] - 1 <<endl;
        }
        else {
           cout << -1 <<endl;
        }
        return 0;
    }


    if(n==k)
    {
        cout << arr[n-1] <<endl;
        return 0;
    }

    int x = arr[k-1];

    if(arr[k] == x) {
        cout << -1 <<endl;
        return 0;
    }
    else
    {
        cout << arr[k-1] <<endl;
    }
    //main();
    return 0;

}

