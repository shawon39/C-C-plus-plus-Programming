
#include <bits/stdc++.h>
using namespace std;

int SieveOfAtkin(int limit)
{
    int ct=0;

    if (limit > 2)  ct++;
    if (limit > 3)  ct++;
    if (limit > 1)  ct++;

    bool sieve[limit];
    for (int i=0; i<limit; i++)
        sieve[i] = false;

    for (int x = 1; x*x < limit; x++)
    {
        for (int y = 1; y*y < limit; y++)
        {

            int n = (4*x*x)+(y*y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                sieve[n] ^= true;

            n = (3*x*x)+(y*y);
            if (n <= limit && n % 12 == 7)
                sieve[n] ^= true;

            n = (3*x*x)-(y*y);
            if (x > y && n <= limit && n % 12 == 11)
                sieve[n] ^= true;
        }
    }

    for (int r = 5; r*r < limit; r++)
    {
        if (sieve[r])
        {
            for (int i = r*r; i < limit; i += r*r)
                sieve[i] = false;
        }
    }

    for (int a = 5; a < limit; a++)
    {
        if (sieve[a])
        {
            ct++;
        }
    }
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
        if(n>0)
        {
            b = SieveOfAtkin(n)+1;
            printf("Case #%d: %d\n",k++,b);
        }
    }
    return 0;
}
