#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin >> n;

    while( n%2 == 0 )
    {
    	cout << 2 << " ";
    	n/=2;
    }

    for(int i=3; i*i<=n; i+=2)
    {
    	while( n%i == 0 ) {
    		cout << i << " ";
    		n/=i;
    	}
    }

    if(n > 2) cout << n << endl;

    return 0;
}


