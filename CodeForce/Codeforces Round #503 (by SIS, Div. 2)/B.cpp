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
    int n; cin >> n;
    int a,b,c,d;
    int arr[10005];

    int cnt = 0;

    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];
    }

    for(int i=1; i<n; i++)
    {
        if( arr[i] < arr[i+1] ) cnt++;
    }

    if( cnt == n-1 )
    {
        for(int i=1; i<=n; i++)
        {
            cout <<  arr[i] << " ";
        }
        cout <<endl;
        return 0;
    }

    for(int i=1; i<=n; i++)
    {
        int lol = i;
        int arr2[10005]= {0};
        arr2[lol]++;

        for(int j=1; j<=n; j++)
        {
            lol = arr[lol];
            arr2[lol]++;
            if( arr2[lol] == 2 )
            {
                cout << lol << " ";
                break;
            }

        }
    }
    return 0;
}
