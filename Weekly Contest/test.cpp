#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1.0)
#define error 0.0001

int main()
{
    int test; cin >> test;
    while(test--)
    {
        double r, arr[100005];
        int n,f;
        cin >> n >> f;

        double mx=0;
        for(int i=0; i<n; i++)
        {
            cin >> r;
            arr[i] = PI*r*r;
            mx= max(arr[i],mx);
        }

        double high=mx, low=0, lol=0, mid;

        while( high-low > error )
        {
            int ct=0;
            mid = ((high+low)/2.0);

            for(int i=0; i<n; i++) { ct += arr[i]/mid; }

            if( ct >= f+1 )
            {
                lol = mid;
                low = mid;
            }
            else high = mid;

        }
        printf("%.4f\n",lol);
    }
    return 0;
}

