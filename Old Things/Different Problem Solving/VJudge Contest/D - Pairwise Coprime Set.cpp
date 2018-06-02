#include <bits/stdc++.h>
using namespace std;

int SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    int ct=0;
    for (int p=2; p<=n; p++)
        if (prime[p])
            ct++;

    return ct;
}


int main()
{
    int t,b,k=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        b = SieveOfEratosthenes(n) +1;
        printf("Case #%d: %d\n",k++,b);
    }
    return 0;
}
