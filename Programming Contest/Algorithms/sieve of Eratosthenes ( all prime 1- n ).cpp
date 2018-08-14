#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    int mark[n+1]={0};

    for(int i=4; i<=n; i+=2)
    {
        mark[i] = 1;
    }
    int limit = sqrt(n) + 1;
    for(int i=3; i<=limit; i+=2)
    {
        if(mark[i]==0)
		{
            for(int j = i*i; j<=n; j+=i )
            {
                mark[j] = 1;
            }
		}

    }

    for(int i=2; i<=n; i++)
    {
        if( !mark[i] ) cout << i << " ";
    }
    puts("");
}

int main()
{
    int n; cin >> n;
    sieve(n); main();
    return 0;
}
