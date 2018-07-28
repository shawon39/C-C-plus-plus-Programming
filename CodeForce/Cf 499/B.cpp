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
	//inputAndOutput();

	int n, p, arr[105]={0};
    cin >> n >> p;

    for(int i=0; i<p; i++)
    {
        int a; cin >> a;
        arr[a]++;
    }

    if( n > p )
    {
        cout << 0 <<endl;
        return 0;
    }
    int ans = 0;
    for(int i=1; i<=100; i++)
    {
        int sum = 0;
        for(int j=1; j<=100; j++)
        {
            sum = sum + (arr[j]/i);
        }
        if( sum >= n ) ans = i;
    }
    cout << ans << endl;
    return 0;
}


