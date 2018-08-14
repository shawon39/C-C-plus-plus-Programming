#include <bits/stdc++.h>
using namespace std;

bool myfun(int a, int b){
    return a>b;
}

int main()
{
    int n; cin >> n;
    int arr[1005], arr2[1005];

    for(int i=0; i<n; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        arr[i] = a + b + c + d;
        arr2[i] = a + b + c + d;
    }
    sort(arr2, arr2+n, myfun);

    for(int i=0; i<n; i++)
    {
        if( arr[0] == arr2[i] )
        {
            cout << i+1 <<endl;
            return 0;
        }
    }
    return 0;
}
