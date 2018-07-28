#include <bits/stdc++.h>
using namespace std;

int main() {

    int test;
    cin >> test;

    for(int t = 0; t < test; t++)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];
        int arr2[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = i+1;
            arr2[i] = i+1;
        }

        int ct = 0;
        while ( std::next_permutation(arr,arr+n) )
        {
            int ck = 1;
            for(int i = 0; i < n; i++)
            {
                if(arr[i] == arr2[i])
                {
                    ck = 0;
                    break;
                }
            }
            if(ck == 1)
            {
                ct++;
                if(ct == k) break;
            }
        }
        cout << arr[0];
        for(int i = 1; i < n; i++)
        {
            cout << " " << arr[i];
        }
        cout << endl;
    }
    return 0;

}
