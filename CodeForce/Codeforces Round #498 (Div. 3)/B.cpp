#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")

bool cmp(int a, int b){
    return a>b;
}

int main()
{
    fast;
    int n, k; cin >> n >> k;
    int arr[20005];
    int arr2[20005];
    int arr3[20005];
    int mark[20005];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }

    sort(arr2, arr2+n, cmp);

    for(int i=0; i<k; i++)
    {
       arr3[i] = arr2[i];
    }
    int ct = 0;
    for(int i=0; i<k; i++)
    {
       for(int j=0; j<n; j++)
       {
           if( arr3[i] == arr[j] )
           {
               mark[ct++] = j;
               arr[j] = -1;
               break;
           }
       }
    }
    int sum = 0;
    for(int i=0; i<k; i++)
    {
        sum += arr3[i];
    }

    sort(mark, mark+k);
    cout << sum <<endl;

    for(int i=0, j = 0, m = 0; i<k; i++)
    {
        int  lol = 0;
        while( j<=mark[i] )
        {
            lol++; j++; m++;
        }
        if( i == k-1 )
        {
            cout << lol + ( n - m ) ;
        }
        else cout << lol << " ";

    }
    cout << endl;
    return 0;

}

