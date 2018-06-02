
#include <bits/stdc++.h>
using namespace std;

long computeXOR(const int n)
{
    switch(n & 3)
    {
    case 0: return n;     // if n is multiple of 4
    case 1: return 1;     // If n % 4 gives remainder 1
    case 2: return n + 1; // If n % 4 gives remainder 2
    case 3: return 0;     // If n % 4 gives remainder 3
    }
}

int main()
{
    long long int i,j,n,k,sum=0;
    cin >> n >> k;

    for(i=2; i<=n; i++)
        sum+=computeXOR(i);

    cout << sum;
    return 0;
}
