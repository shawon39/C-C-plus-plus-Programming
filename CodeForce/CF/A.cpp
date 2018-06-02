#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin >> n;
    int arr[1005], arr2[1005], arr3[1005];

    for(int i=n-1; i>=0; i--)
    {
        cin >> arr[i];
    }
    int k=0;
    for(int i=0; i<n; i++)
    {
        int x = arr[i];
        int m = 1;

        for(int j=0; j<=i; j++)
        {
            if( arr[j] == x && arr3[j] == -1 ) {
                m = 0;
                break;
            }
        }
        if(m==1)
        {
            arr2[k++] = x;
            arr3[i] = -1;
        }
    }
    cout << k <<endl;
    for(int i=k-1; i>=0; i--)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
