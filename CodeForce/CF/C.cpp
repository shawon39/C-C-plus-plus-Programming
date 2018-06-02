#include <bits/stdc++.h>
using namespace std;

long long arr[2000005];
long long  arr2[2000005];

int main()
{
    long long n,m,x=0, prev=0;
    cin >> n >> m;

    for(long long i=0; i<n; i++) { cin >> arr[i]; }
    for(long long i=0; i<m; i++) { cin >> arr2[i]; }

    long long j = 0;

    for(long long i=0; i<n; i++)
    {
        x += arr[i];
        if(i!=0) prev += arr[i-1];

        for( ; j<m ; )
        {
            if( arr2[j] > x ) break;
            else
            {
                if(i==0) cout << i+1 << " " << arr2[j++] <<endl;
                else cout << i+1 << " " << arr2[j++] - prev <<endl;
            }
        }
    }
    return 0;
}
