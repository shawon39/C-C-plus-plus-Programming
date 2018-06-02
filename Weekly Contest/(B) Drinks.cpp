#include <bits/stdc++.h>
using namespace std;

#define sf1(x) scanf("%d",&x)

int main()
{
    int i,n,x; double k=0;
    sf1(n);
    for(i=1; i<=n; i++)
    {
        sf1(x);
        k += x;
    }
    cout << setprecision(12) << 1.0 * k/n <<endl;

    return 0;
}
