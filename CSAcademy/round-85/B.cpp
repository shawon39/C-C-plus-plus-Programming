#include <bits/stdc++.h>
using namespace std;

int arr[105];
#define ll long long int

int solve(int n)
{
    int temp = n, sum=0;
    while(temp)
    {
        sum += (temp%10);
        temp /= 10;
    }
    return sum;
}

int main()
{
    int n, x;

    cin >> n >> x;

    int ans = 0;
    for(int i=1; i<=100; i++)
    {
        ll lol = n + i;

        if( lol % 10 != 0 || solve(i) > x ) continue;

        int ct = 0;
        cout << lol <<endl;
        while( lol )
        {
            if( lol%10 == 0 ) ct++;
            else break;

            lol /= 10;
        }
        if( ct >= ans ) ans = ct;
    }
    cout << ans <<endl;
    return 0;

}
