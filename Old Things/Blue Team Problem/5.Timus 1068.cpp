#include <bits/stdc++.h>
using namespace std;

int mark[170007];
int prime[170007];

void sieve()
{
    int n = 170007;
    for(int i=4; i<=n; i+=2)
    {
        mark[i] = 1;
    }
    int limit = sqrt(n) + 1;
    for(int i=3; i<=limit; i+=2)
    {
    	if(mark[i] == 0)
    	{
    		for(int j = i*i; j<=n; j+=i )
        	{
            	mark[j] = 1;
        	}
    	}
    }
    for(int i=2, j = 1; i<=170007; i++)
    {
        if( !mark[i] ) prime[j++] = i;
    }
}


int main()
{

    int n; cin >> n; sieve();

    while(n--)
    {
        int x; cin >> x;
        cout << prime[x] <<endl;
    }

    return 0;
}

