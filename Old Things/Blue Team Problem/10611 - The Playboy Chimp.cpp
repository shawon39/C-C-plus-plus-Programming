#include <bits/stdc++.h>
using namespace std;


void inputAndOutput()
{
    #ifndef ONLINE_JUDGE
    freopen("D:\\Testing\\input.txt", "r", stdin);
    freopen("D:\\Testing\\output.txt", "w", stdout);
    #endif
}


int lol;

int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        lol = mid;
        if (arr[mid] == x) return mid;
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
   }
   return -1;
}

int main()
{
    //inputAndOutput();
    int n; cin >> n;
    int arr[n+5];
    int arr2[n+5];
    int mx = INT_MIN;
    int mn = INT_MAX;
    set<int>s;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
        mx = max( arr[i], mx );
        mn = min( arr[i], mn );
    }

    int j=0;
    for(auto x : s)
    {
        arr2[j++] = x;
    }

    n = s.size();

    int q; cin >> q;
    while(q--)
    {
        int luchu, index; cin >> luchu;


        if( luchu < mn )
        {
            cout << "X " << mn <<endl;
            continue;
        }
        if( luchu > mx )
        {
            cout << mx <<  " X" <<endl;
            continue;
        }

        int bal = binarySearch(arr2, 0, n-1, luchu);

        if( bal != -1 )
        {
            if( bal - 1 >= 0  ) cout << arr2[bal-1] << " ";
            else cout << "X ";

            if( bal + 1 < n  ) cout << arr2[bal+1] <<endl;
            else cout << "X" << endl;
        }
        else
        {
            int a,b;

            a = arr2[lol] - luchu;
            b = arr2[lol] + luchu;

            if( a > 0 )
            {
                cout << arr2[lol-1] << " " << arr2[lol] <<endl;
            }
            else
            {
                cout << arr2[lol] << " " << arr2[lol+1]<< endl;
            }

        }

    }

    return 0;
}


/*

10
1 3 5 7 8 9 12 43 56 78
100

*/
